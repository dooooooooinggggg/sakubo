 #include <stdio.h>
 
 int j = 42;
  
 void func3() {
		int i = 11, j = 999;
		printf("\t\t\t[func3内] i @ %p = %d\n", &i, i);	
  	printf("\t\t\t[func3内] j @ %p = %d\n", &j, j);
	};
	
	void func2() {
		int i = 7;
		printf("\t\t[func2内] i @ %p = %d\n", &i, i);
		printf("\t\t[func2内] j @ %p = %d\n", &j, j);
		printf("\t\t[func2内] jに1337を代入");
		func3();
		printf("\t\t[func2に戻ってきました] i @ %p = %d\n", &i, i);
		printf("\t\t[func2に戻ってきました] j @ %p = %d\n", &j, j);
	}
	
	void func1() {
		int i = 5;
		printf("\t[func1内] i @ %p = %d\n", &i, i);
		printf("\t[func1内] j @ %p = %d\n", &j, j);
		func2();
		printf("\t[func1に戻ってきました] i @ %p = %d\n", &i, i);
		printf("\t[func1に戻ってきました] j @ %p = %d\n", &j, j);
	}
	
	int main() {
		int i = 3;
		printf("[main内] i @ %p = %d\n", &i, i);
	 	printf("[main内] j @ %p = %d\n", &j, j);
		func1();
		printf("[mainに戻ってきました] i @ %p = %d\n", &i, i);
	 	printf("[mainに戻ってきました] j @ %p = %d\n", &j, j);
	}
