package com.sunny._05_invokemethod;

import java.lang.reflect.Method;
import java.util.Arrays;

class Person{
	public static void staticMethod(String name){
		System.out.println("name="+name);
	}
	public static void show1(int... nums){
		System.out.println(Arrays.toString(nums));
	}
	public static void show2(String... nums){
		System.out.println(Arrays.toString(nums));
	}
}
//使用反射来调用静态方法和数组参数方法:
public class StaticMethodInvokeDemo {
	public static void main(String[] args) throws Exception {
		//调用 public static void staticMethod(String name)
		Class<Person> clz = Person.class;
		Method m = clz.getMethod("staticMethod",String.class);
		//调用static方法,obj对象设置为null
		m.invoke(null, "桂朝阳");
		System.out.println("------------------------------");
		
		//调用public static void show1(int... nums)
		Method m1 = clz.getMethod("show1", int[].class);
		m1.invoke(null, new int[]{1,2,3});
		
		//调用public static void show2(Integer... nums)
		Method m2 = clz.getMethod("show2", String[].class);
		
		//m2.invoke(null,new String[]{"A","B","C"}); //引用类型会自动解包,报错
		m2.invoke(null, new Object[]{new String[]{"A","B","C"}});
		
		
		
	}
}
