package com.sunny._03_createInstance;

import java.lang.reflect.Constructor;

class Test {
	public Test() {
		System.out.println("无参构造器被调用");
	}

	public Test(int age) {
		System.out.println("age=" + age);
	}

	private Test(String name, int age) {
		System.out.println(name + "," + age);
	}
}

public class CreateInstanceDemo2 {
	public static void main(String[] args) throws Exception {
		//需求:调用public Test(int age) 构造器
			/*
			 1:先调用被操作类的字节码对象
			 2:获取该构造器
			 3:调用构造器中创建对象的方法
			  */
			//1:先调用被操作类的字节码对象
			Class<Test> cl = Test.class;
			//2:获取该构造器
			Constructor<Test> c = cl.getConstructor(int.class);
			//3:调用构造器中创建对象的方法
			Test test = c.newInstance(19);
			System.out.println(test);
			
		//需求:	调用private Test(String name,int age)构造器
			c=cl.getDeclaredConstructor(String.class,int.class);
			c.setAccessible(true);
			test = c.newInstance("桂朝阳",19);
			System.out.println(test);
			
		//需求:调用public Test() 构造器	
			c=cl.getConstructor();
			c.newInstance();
			
			//public Test() 为公共无参构造器
			//可直接使用Class类中newInstance方法创建对象
			Class<Test> ccc = Test.class;
			ccc.newInstance();
			
	}	
}
