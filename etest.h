/*
 * etest.h
 *
 *  Created on: 2018/08/30
 *      Author: hp
 */


#define TRUE  (1)
#define FALSE (-1)

//画面消去
#define CLS printf("\033[2J")

//テキストカラー
#define BLACK    printf("\033[30m")
#define BLUE     printf("\033[34m")
#define RED      printf("\033[31m")
#define MAGENTA  printf("\033[31m")
#define GREEN    printf("\033[31m")
#define CYAN     printf("\033[31m")
#define YELLOW   printf("\033[31m")
#define WHITE    printf("\033[31m")

//テキストのロケーションマクロ
//関数のような機能定義も可能です

#define locate(a,b)printf("\033[%d;%dH",(a),(b))
