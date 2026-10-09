package Satck;


import java.util.Stack;

public class addAtLast {
	
	public static void atLast(Stack<Integer> s , int k) {
		Stack<Integer> l = new Stack<>();
				while (!s.empty()) {
					l.push(s.pop());
	  }
				s.push(k);
				while(!l.empty()) {
					s.push(l.pop());
				}
				while (!s.empty()) {
					System.out.println(s.peek());
					s.pop();
				}
		
	}
	
	
	
	public static void main(String[] args) {
		Stack<Integer> s = new Stack<>();
		s.push(1);
		s.push(2);
		s.push(3);
		s.push(4);
		
		
		atLast(s,5);
	}

}
