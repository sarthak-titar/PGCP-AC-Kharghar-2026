import express from "express";
import { createPool } from "mysql2/promise";

const app = express();
app.use(express.json());

// Database connection pool setup
const sqlconnectionpool = createPool({
    host: "localhost",
    port: 3306,
    user: "root",
    password: "Sarthak@123",
    database: "product",
    connectionLimit: 10,
    queueLimit: 0
});

// Root Welcome Endpoint
app.get("/", (req, res) => {
    res.send({ message: "Welcome to the Product CRUD API!" });
});

/* ==========================================================================
   1. CREATE (Insert a new product)
   ========================================================================== */
app.post("/product", async (req, res) => {
    try {
        const { name, price, description, qty } = req.body;
        
        // Input validation check
        if (!name || price === undefined || qty === undefined) {
            return res.status(400).send({ message: "Name, price, and qty are required fields." });
        }

        const insertQuery = "INSERT INTO product (name, price, description, qty) VALUES (?, ?, ?, ?)";
        const [result] = await sqlconnectionpool.query(insertQuery, [name, price, description, qty]);
        
        res.status(201).send({ 
            message: "Product created successfully", 
            insertedId: result.insertId 
        });
    } catch (error) {
        console.error(error);
        res.status(500).send({ message: "Something went wrong while inserting the product." });
    }
});

/* ==========================================================================
   2. READ ALL (Fetch all products)
   ========================================================================== */
app.get("/product", async (req, res) => {
    try {
        const fetchAllQuery = "SELECT * FROM product";
        const [rows] = await sqlconnectionpool.query(fetchAllQuery);
        
        res.send(rows);
    } catch (error) {
        console.error(error);
        res.status(500).send({ message: "Something went wrong while fetching products." });
    }
});

/* ==========================================================================
   3. READ BY ID (Fetch a single product)
   ========================================================================== */
app.get("/product/:id", async (req, res) => {
    try {
        const { id } = req.params;
        const fetchByIdQuery = "SELECT * FROM product WHERE id = ?";
        const [rows] = await sqlconnectionpool.query(fetchByIdQuery, [id]);

        if (rows.length === 0) {
            return res.status(404).send({ message: "Product not found" });
        }

        // Return only the object instead of an array containing one object
        res.send(rows[0]);
    } catch (error) {
        console.error(error);
        res.status(500).send({ message: "Something went wrong while retrieving the product." });
    }
});

/* ==========================================================================
   4. UPDATE (Modify an existing product by ID)
   ========================================================================== */
app.put("/product/:id", async (req, res) => {
    try {
        const { id } = req.params;
        const { name, price, description, qty } = req.body;

        const updateQuery = "UPDATE product SET name = ?, price = ?, description = ?, qty = ? WHERE id = ?";
        const [result] = await sqlconnectionpool.query(updateQuery, [name, price, description, qty, id]);

        // affectedRows will be 0 if the ID does not exist in the database
        if (result.affectedRows === 0) {
            return res.status(404).send({ message: "Product not found to update" });
        }

        res.send({ message: "Product updated successfully" });
    } catch (error) {
        console.error(error);
        res.status(500).send({ message: "Something went wrong while updating the product." });
    }
});

/* ==========================================================================
   5. DELETE (Remove a product by ID)
   ========================================================================== */
app.delete("/product/:id", async (req, res) => {
    try {
        const { id } = req.params;
        const deleteQuery = "DELETE FROM product WHERE id = ?";
        const [result] = await sqlconnectionpool.query(deleteQuery, [id]);

        if (result.affectedRows === 0) {
            return res.status(404).send({ message: "Product not found to delete" });
        }

        res.send({ message: "Product deleted successfully" });
    } catch (error) {
        console.error(error);
        res.status(500).send({ message: "Something went wrong while deleting the product." });
    }
});

// Start the server
const PORT = 7500;
app.listen(PORT, () => {
    console.log(`Server is running smoothly on http://localhost:${PORT}`);
});
