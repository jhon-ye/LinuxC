# LinuxC
Linux C Learn


## 输入输出
### 格式化的输入输出
* scanf
  * int scanf(const char* format, ...); ... : 地址表
  * scanf("%s", &str) scanf 中使用 字符串 非常危险
* printf
  * d/i    有无符号十进制整数 int a = 567;  printf("%d", a); 
  * x/X    十六进制无符号整数 int a = 256;  printf("%x", a);  
  * o      八进制无符号整数 int a = 256;    printf("%x", a);  
  * u      无符号十进制整数 int a = 567;    printf("%u", a);
  * c      单一字符        char a = 65    printf("%c", a);
  * s      字符串                         printf("%s", "abc");
  * e/E    指数形式的浮点数 
  * f      小数形式的浮点数  
  * g      e和 f 中较短一种
  * %%     % 百分号本身


### 字符输入输出
* getchar
* putchar

### 字符串输入输出
* gets
  * gets 很危险，对输入缓冲区不做任何校验 使用 fgets getline 代替
* puts
