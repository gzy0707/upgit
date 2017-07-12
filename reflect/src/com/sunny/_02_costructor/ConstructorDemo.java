package com.sunny._02_costructor;

import java.lang.reflect.Constructor;

//定义一个User类
class User {
	public User() {
	}

	public User(String name) {
	}

	private User(String name, int age) {
	}

}

//获取类的构造器
public class ConstructorDemo {
	public static void main(String[] args) throws Exception {
		getOne();
		getAll();
	}

	//获取User类中指定的一个构造器
	private static void getOne() throws Exception {
		Class cll = User.class;
		//获取public User(){};
		Constructor c = cll.getConstructor();
		System.out.println(c);

		//获取public User(String name){}
		c = cll.getConstructor(String.class);
		System.out.println(c);

		//获取:private User(String name, int age){};
		c = cll.getDeclaredConstructor(String.class, int.class);
		System.out.println(c);
		System.out.println("------------------------------");
	}

	//获取 User类中的所有构造器
	private static void getAll() {
		// 1):先获取被操作类的字节码对象.
		Class cl = User.class;
		// 2):获取构造器
		Constructor[] cs = cl.getConstructors(); //只能获取public 修饰的构造器
		for (Constructor c : cs) {
			System.out.println(c);
		}
		System.out.println("------------------------------");

		cs = cl.getDeclaredConstructors();//获取所有的构造器,和访问修饰符无关
		for (Constructor c : cs) {
			System.out.println(c);
		}
	}
}
