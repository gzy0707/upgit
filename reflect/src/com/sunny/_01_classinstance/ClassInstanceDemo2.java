package com.sunny._01_classinstance;

//九大内置的Class实例 和数组的Class实例
public class ClassInstanceDemo2 {
	public static void main(String[] args) {
		//九大内置的Class实例
		Class intClz = int.class;
		System.out.println(intClz);
		System.out.println(Integer.class == int.class); //字节码不同,返回false
		//integer的TYPE常量,用来返回该包装类对应的基本类型的Class实例
		System.out.println(Integer.TYPE == int.class); //true
		
		Class voidc = void.class;
		System.out.println(voidc);
		
		//数组的Class实例
		int [] arr1 = {};
		int [] arr2 = {1,2,3};
		String[] arr3 = {"A","B","C"};
		
		//方式1:数组名.getClass();
		Class cc = arr1.getClass();
		//方式2:数组类型.class
		Class cc1 = int[].class;
		System.out.println(cc == cc1); //true
		System.out.println(cc.getClass() == cc1.getClass()); //true
		System.out.println(int[].class == int[].class);//true
		
//		System.out.println(int[].class == String[].class);  false
//		System.out.println(int[].class == int[][].class); //false
	}
}
