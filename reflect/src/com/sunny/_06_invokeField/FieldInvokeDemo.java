package com.sunny._06_invokeField;

import java.lang.reflect.Field;

class Test {
	public String name;
	private int id;
	public static int number;
}

public class FieldInvokeDemo {
	public static void main(String[] args) throws Exception {
		getOne();
		getAll();
	}
	
	//获取单个指定字段
	private static void getOne() throws Exception {
		//当前操作类的字节码对象
		Test t = Test.class.newInstance();
		
		//获取public String name;
		Field f = Test.class.getField("name");
		f.set(t,"桂春阳"); //设置字段值
		Object o = f.get(t);//获取字段值
		System.out.println(o); 
		
		//获取private int id;
		Field f1 = Test.class.getDeclaredField("id");
		f1.setAccessible(true); //因为是私有字段,需要设置可访问
		f1.set(t, 12);
		int a = f1.getInt(t);
		System.out.println(a);
		
		
		//获取public static byte number;
		Field f2 = Test.class.getField("number");
		f2.set(null, 21);
		int b = f2.getInt(null);
		System.out.println(b);
		
		System.out.println("------------------------------");
		}
	
		

	//获取所有的字段
	private static void getAll() {
		//获取当前操作类的字节码对象的所有public修饰字段(包括继承来的字段)
		Field [] f = Test.class.getFields();
		for (Field fd : f) {
			System.out.println(fd);
		}
		System.out.println("------------------------------");
		//获取当前操作类的字节码对象的所有字段(不包括继承来的)
		Field [] f1 = Test.class.getDeclaredFields();
		for (Field fd : f1) {
			System.out.println(fd);
		}
	}

}
