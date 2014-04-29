void disp_send(unsigned char cmd, unsigned char type);
void LCD_CtrlWrite_IC(unsigned char c);
void  LCD_DataWrite_IC(unsigned char c);
void LCD_DataWrite(unsigned char LCD_DataH,unsigned char LCD_DataL);
void delay_ms(unsigned int number);
void lcd_init (void);
void dsp_single_colour(unsigned char DH,unsigned char DL);
void PutPixel(int x,int y,int colour);
void LCD_SetArea(unsigned short x1, unsigned short y1, unsigned short x2, unsigned short y2);
void draw_line (unsigned int x0, unsigned int y0, unsigned int x1, unsigned int y1, unsigned int color);
void put_pixels(unsigned int num, unsigned int colour);
void draw_graph (unsigned char * vars, unsigned char * vars_old, unsigned char len, unsigned char x_0, unsigned char y_0, unsigned char ymax, unsigned char line, unsigned char color, unsigned char redraw);
void put_pixels(unsigned int num, unsigned int colour);
void print_char_s (unsigned char data,unsigned char row,unsigned char pos, unsigned int color);
unsigned char print_str (unsigned char *dat, unsigned char line, unsigned char off, unsigned char type);



#define	RED		0x003F
#define	BLUE	0xFC00
#define	GREEN	0x0FF0
#define	BLACK	0x0000
#define	WHITE	0xFFFF
