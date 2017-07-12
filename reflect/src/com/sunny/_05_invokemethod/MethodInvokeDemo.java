package com.sunny._05_invokemethod;

import java.lang.reflect.Method;
import java.util.Date;

class User {
	public void sayHello() {
		System.out.println("无参数方法被调用了");
	}

	public void sayHi(String name) {
		System.out.println("name=" + name);
	}

	private String sayHi(String name, int age) {
		return name + "_" + age;
	}
}

//使用反射来调用方法
public class MethodInvokeDemo {
	public static void main(String[] args) throws Exception {
		Class<User> clz = User.class; //获取被操作类的字节码对象
		User uu = clz.newInstance();
		//需求:调用public void sayHell()方法
		Method m = clz.getMethod("sayHello");
		m.invoke(uu);
		
		//需求:调用public void sayHi(String name) 方法
		m = clz.getMethod("sayHi", String.class);
		m.invoke(uu, "桂阳");
		
		//需求:调用private String sayHi(String name, int age)方法
		m = clz.getDeclaredMethod("sayHi", String.class,int.class);
		//设置可访问的
		m.setAccessible(true);
		Object ret = m.invoke(uu, new Object[] { "桂阳", 19 });
		System.out.println(ret);
		System.out.println("------------------------------");
		
		
		Object o = new Date();
		Date d = (Date)o; //强制类型转换
		String s = d.toLocaleString();
		System.out.println(s);
		
		//使用反射
		//1):获取Date类的字节码对象
		Class c = o.getClass();
		//获取Date类中的方法
		Method method = c.getMethod("toLocaleString");
		//使用Method类中的invode方法来调用Date类中的toLocaleString方法
		Object rett = method.invoke(c.newInstance());
		System.out.println(rett);
	}
}
