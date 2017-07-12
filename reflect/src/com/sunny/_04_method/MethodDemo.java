package com.sunny._04_method;

import java.lang.reflect.Method;

class User {
	public void sayHello() {

	}

	public void sayHi(String name) {

	}

	private String sayHi(String name, int age) {
		return name + "_" + age;
	}

	public void test(String name, int x, String[] arr) {

	}
}

//使用反射来获取类中的方法
public class MethodDemo {
	public static void main(String[] args) throws Exception {
		getOne();
		getAll();
	}
	
	//获取单个方法
	private static void getOne() throws Exception {
		Class clz = User.class;
		//获取public void sayHello()方法
		Method m = clz.getMethod("sayHello");
		System.out.println(m);
		//获取public void sayHi(String name)方法
		m = clz.getMethod("sayHi", String.class);
		System.out.println(m);
		//获取private String sayHi(String name, int age)方法
		m = clz.getDeclaredMethod("sayHi", String.class, int.class);
		System.out.println(m);
		//获取public void test(String name, int age, String[]arr)方法
		m= clz.getMethod("test", String.class,int.class,String[].class);
		System.out.println(m);

		System.out.println("------------------------------");
	}

	//获取User类中的所有方法
	private static void getAll() {
		//获取User类中的所有的public方法 (包括继承父类的方法)
		Class clz = User.class;
		Method[] ms = clz.getMethods();
		for (Method m : ms) {
			System.out.println(m);
		}
		System.out.println("------------------------------");

		//获取自身所有所有的方法(不包括继承,和访问权限无关)
		ms = clz.getDeclaredMethods();
		for (Method m : ms) {
			System.out.println(m);
		}

	}
}
