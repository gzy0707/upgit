package com.sunny._03_createInstance;

import java.lang.reflect.Constructor;

class User {
	public User() {
		System.out.println("无参数构造器");
	}

	public User(String name) {
		System.out.println("name=" + name);
	}

	private User(String name, int age) {
		System.out.println(name + "," + age);
	}

}

//使用反射来调用构造器(创建对象)
public class CreateInstanceDemo {
	public static void main(String[] args) throws Exception {
		//需求:调用public User(String name)
			Class<User> clz = User.class; //获取被操作类的字节码对象
			Constructor<User> c = clz.getConstructor(String.class);//获取某参数类型的构造器
			/*构造器类Constructor中获取 T  newInstance(Object... initargs) 
	         //使用此 Constructor 对象表示的构造方法来创建该构造方法的声明类的新实例,
			 并用指定的初始化参数初始化该实例。 */
			User obj = c.newInstance("桂阳");//传递的实际参数
			System.out.println(obj);
			System.out.println("------------------------------");
			
			
		//需求:调用private User(String name,int age)
			c = clz.getDeclaredConstructor(String.class,int.class);
			//设置可访问的(设置忽略安全检查)
			c.setAccessible(true);
			obj = c.newInstance("桂阳",19);
			System.out.println(obj);
			System.out.println("------------------------------");
			
			
			//需求:调用public User()
			c = clz.getConstructor();
			obj = c.newInstance();
			
			//如果一个类,具有对外可访问的构造器,并且是无参数的,则可以:
			Class<User> u = User.class;
			u.newInstance();
	}
}
