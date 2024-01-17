### to run

**gcc ./src/scanf.c -o ./dist/scanf.exe**
**gcc ./src/welcome.c -o ./dist/welcome.exe**
**gcc ./src/functions.c -o ./dist/functions.exe**
**gcc ./src/recursion.c -o ./dist/recursion.exe**
**gcc ./src/factorial.c -o ./dist/factorial.exe**

### format specifiers

%d - int
%d - bool
%lf - double
%f - float
%c - char

%2lf - double(2 d.p.)

### Take input from users

scanf()
int age;
scanf("input age %d", &age) // remember to always include ampersand before the variable name

printf("user age is %d", age)
