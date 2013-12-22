#ifdef CONFIG_GTSTUDIO_LOGO

#define MVAL			(13)
#define MVAL_USED 		(0)						//0=each frame   1=rate by MVAL
#define INVVDEN			(1)						//0=normal       1=inverted
#define BSWP			(0)						//Byte swap control
#define HWSWP			(1)						//Half word swap control


#if ( LCD_TFT == PT035 )
//TFT 320240
#define LCD_XSIZE_TFT		(320)
#define LCD_YSIZE_TFT		(240) 

//Timing parameter for LCD PT035 群创屏
#define VBPD			(11) 						//垂直同步信号的后肩
#define VFPD			(5)						//垂直同步信号的前肩
#define VSPW			(5)						//垂直同步信号的脉宽

#define HBPD			(69)						//水平同步信号的后肩
#define HFPD			(10)						//水平同步信号的前肩
#define HSPW			(5)						//水平同步信号的脉宽

#define CLKVAL_TFT		(3)

#elif ( LCD_TFT == WD_F3224WI )
//TFT 320240
#define LCD_XSIZE_TFT		(320)
#define LCD_YSIZE_TFT		(240) 

//Timing parameter for LCD WD_F3224WI 胜华屏
#define VBPD			(12) 						//垂直同步信号的后肩
#define VFPD			(5)						//垂直同步信号的前肩
#define VSPW			(5)						//垂直同步信号的脉宽

#define HBPD			(69)						//水平同步信号的后肩
#define HFPD			(10)						//水平同步信号的前肩
#define HSPW			(5)						//水平同步信号的脉宽

#define CLKVAL_TFT		(5)

#elif ( LCD_TFT == TX11D )
//TFT 480272
#define LCD_XSIZE_TFT	 	(480)	
#define LCD_YSIZE_TFT	 	(272)

//Timing parameter for LCD TX11D 日立屏
#define VBPD			(5)						//垂直同步信号的后肩
#define VFPD			(5)						//垂直同步信号的前肩
#define VSPW			(5)						//垂直同步信号的脉宽

#define HBPD			(5)						//水平同步信号的后肩
#define HFPD			(5)						//水平同步信号的前肩
#define HSPW			(5)						//水平同步信号的脉宽

#define CLKVAL_TFT		(4)

#elif ( LCD_TFT == A070 )
//TFT 800480
#define LCD_XSIZE_TFT	 	(800)	
#define LCD_YSIZE_TFT	 	(480)

//Timing parameter for LCD AT070TN92 群创屏
#define VBPD			(25)						//垂直同步信号的后肩
#define VFPD			(5)						//垂直同步信号的前肩
#define VSPW			(1)						//垂直同步信号的脉宽

#define HBPD			(67)						//水平同步信号的后肩
#define HFPD			(40)						//水平同步信号的前肩
#define HSPW			(31)						//水平同步信号的脉宽

#define CLKVAL_TFT		(1)

#endif

#define USER_SET			0

#endif
