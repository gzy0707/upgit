package com.sunny._01_classinstance;

import java.util.Date;
/* 表示Class对象的三种方式
	1):类名.class; 表示一份字节码
	2):对象.getClass();获取该对象的真实类型
	3):使用Class.forName (String className):根据类的全限定名来获取Class对象
	*/
public class ClassInstanceDemo {
	public static void main(String[] args) throws Exception {
		//需求:获取java.util.Date类的Class对象
		
		 //	1):类名.class; 表示一份字节码
			Class c1 = Date.class;
			System.out.println(c1);
		 //	2):对象.getClass();获取该对象的真实类型
			Date date = new Date();
			Class c2 = date.getClass();
	
		 //	3):使用Class.forName (String className):根据类的全限定名来获取Class对象
			Class c3 = Class.forName("java.util.Date");
			
			System.out.println(c1==c2);
			System.out.println(c1==c3);
			System.out.println(c2==c3);
	}
}
