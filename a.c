/*
 * @Author: lhj 2843433906@qq.com
 * @Date: 2022-05-15 10:45:55
 * @LastEditors: lhj 2843433906@qq.com
 * @LastEditTime: 2022-05-19 16:27:33
 * @FilePath: \undefinedc:\Users\l\Desktop\a.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#define xp 0xa.1fp10
int main(void)
{
	//const float  x,y;
	size_t intsize;
	intsize = sizeof (int);
	const float x = xp;
	const float y=0xa.1fp0;
	printf("%e %a %f hello\007  * %zd *\n",x,y,pow(3.5,2.5),intsize);
	printf("hello"\
	"motherfucker"          "!!");
	//getchar();
	return 0;
}