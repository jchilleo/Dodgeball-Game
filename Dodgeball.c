#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <glut/glut.h>
#include <GL\glut.h>



/* GLUT callback Handlers */

float x1, xL = -.1, xR = .1, fay = -.005, bay = -.003f, cay = -.009f, day = -.012f, gey = -.012f, fey = -.006f, ay= -1.0,by=-1.0,cy= -1.0,dy= -1.10,ey= -1.2, fy = -1.10, gy = -1.10;
float ax, bx, cx, dx, ex, fx, gx, aw, bw, cw, dw, ew, fw, gw;
int clash = 2, count = 0, singles =0, tens =0 , hundreds =0;
int countedA = 0, countedB = 0, countedC = 0, countedD = 0, countedE = 0, countedF = 0, countedG = 0;
int startGame = 0;
void clashCheck(){
	
	if((ax >= xL && ax <= xR) && (ay >= -.93f && ay <= -.90f))
		clash = 1;
	else{}
	if((bx >= xL && bx <= xR) && (by >= -.93f && by <= -.90f))
		clash = 1;
	else{}
	if((cx >= xL && cx <= xR) && (cy >= -.93f && cy <= -.90f))
		clash = 1;
	else{}
	if((dx >= xL && dx <= xR) && (dy >= -.93f && dy <= -.90f))
		clash = 1;
	else{}
	if((ex >= xL && ex <= xR) && (ey >= -.93f && ey <= -.90f))
		clash = 1;
	else{}
	if((fx >= xL && fx <= xR) && (fy >= -.93f && fy <= -.90f))
		clash = 1;
	else{}
	if((gx >= xL && gx <= xR) && (gy >= -.93f && gy <= -.90f))
		clash = 1;
	else{}
		
}

void counter(){
	if((ax >= -1.0 && ax <= 1.0) && (ay >= -.96f && ay <= -.94f)){
		if(countedA == 0){
			count++;
			countedA = 1;
		}
		else{}
	}
	else{}
	if((bx >= -1.0 && bx <= 1.0) && (by >= -.96f && by <= -.94f)){
		if(countedB == 0){
			count++;
			countedB = 1;
		}
		else{}
	}
	else{}
	if((cx >= -1.0 && cx <= 1.0) && (cy >= -.96f && cy <= -.94f)){
		if(countedC == 0){
			count++;
			countedC = 1;
		}
		else{}
	}	
	else{}
	if((dx >= -1.0 && dx <= 1.0) && (dy >= -.96f && dy <= -.94f)){
		if(countedD == 0){
			count++;
			countedD = 1;
		}
		else{}
	}
	else{}
	if((ex >= -1.0 && ex <= 1.0) && (ey >= -.96f && ey <= -.94f)){
		if(countedE == 0){
			count++;
			countedE = 1;
		}
		else{}
	}
	else{}
	if((fx >= -1.0 && fx <= 1.0) && (fy >= -.96f && fy <= -.94f)){
		if(countedF == 0){
			count++;
			countedF = 1;
		}
		else{}
	}
	else{}
	if((gx >= -1.0 && gx <= 1.0) && (gy >= -.96f && gy <= -.94f)){
		if(countedG == 0){
			count++;
			countedG = 1;
		}
		else{}
	}
	else{}
	
	singles = count % 10;
	
	if ((count % 100) < 10){
		tens = 0;
	}
	else if ((count % 100) < 20){
		tens = 1;
	}
	else if ((count % 100) < 30){
		tens = 2;
	}
	else if ((count % 100) < 40){
		tens = 3;
	}
	else if ((count % 100) < 50){
		tens = 4;
	}
	else if ((count % 100) < 60){
		tens = 5;
	}
	else if ((count % 100) < 70){
		tens = 6;
	}
	else if ((count % 100) < 80){
		tens = 7;
	}
	else if ((count % 100) < 90){
		tens = 8;
	}
	else{
		tens = 9;
	}
	
	if (count < 100){
		hundreds = 0;
	}
	else if (count < 200){
		hundreds = 1;
	}
	else if (count < 300) {
		hundreds = 2;
	}
	else if (count < 400){
		hundreds = 3;
	}
	else if (count < 500){
		hundreds = 4;
	}
	else if (count < 600){
		hundreds = 5;
	}
	else if (count < 700){
		hundreds = 6;
	}
	else if (count < 800){
		hundreds = 7;
	}
	else if (count < 900){
		hundreds = 8;
	}
	else {
		hundreds = 9;
	}
	
}

void singlesTop(){
	glBegin(GL_POLYGON); //top singles
		glColor3f(1.0,1.0,1.0);
		glVertex2f(0.69, .905);
		glVertex2f(0.31, .905);
		glVertex2f(0.33, .860);
		glVertex2f(0.67, .860);
	glEnd();
}
void singlesTopRight(){
	glBegin(GL_POLYGON);  // top right singles
		glColor3f(1.0,1.0,1.0);
		glVertex2f(0.7, .875);
		glVertex2f(0.67, .850);
		glVertex2f(0.67, .535);
		glVertex2f(0.7, .51);
	glEnd();
}
void singlesMiddle(){
	glBegin(GL_POLYGON); //middle singles
		glColor3f(1.0,1.0,1.0);
		glVertex2f(0.67, .497);
		glVertex2f(0.31, .497);
		glVertex2f(0.333, .542);
		glVertex2f(0.65, .542);
	glEnd();
}
void singlesBottomRight(){
	glBegin(GL_POLYGON);  // bottom right singles
		glColor3f(1.0,1.0,1.0);
		glVertex2f(0.7, .505);
		glVertex2f(0.67, .48);
		glVertex2f(0.67, .165);
		glVertex2f(0.7, .14);
	glEnd();
}
void singlesBottom(){
	glBegin(GL_POLYGON); //bottom singles
		glColor3f(1.0,1.0,1.0);
		glVertex2f(0.69, .115);
		glVertex2f(0.31, .115);
		glVertex2f(0.33, .163);
		glVertex2f(0.67, .163);
	glEnd();
}
void singlesBottomLeft(){
	glBegin(GL_POLYGON);  // bottom left singles
		glColor3f(1.0,1.0,1.0);
		glVertex2f(0.29, .505);
		glVertex2f(0.32, .48);
		glVertex2f(0.32, .165);
		glVertex2f(0.29, .14);
	glEnd();
}
void singlesTopLeft(){
	glBegin(GL_POLYGON);  // top left singles
		glColor3f(1.0,1.0,1.0);
		glVertex2f(0.29, .877);
		glVertex2f(0.32, .852);
		glVertex2f(0.32, .537);
		glVertex2f(0.29, .512);
	glEnd();
}
void tensTop(){
	glBegin(GL_POLYGON); //top tens
		glColor3f(1.0,1.0,1.0);
		glVertex2f(0.19, .905);
		glVertex2f(-0.19, .905);
		glVertex2f(-0.17, .860);
		glVertex2f(0.17, .860);
	glEnd();
}
void tensTopRight(){
	glBegin(GL_POLYGON);  // top right tens
		glColor3f(1.0,1.0,1.0);
		glVertex2f(0.2, .875);
		glVertex2f(0.17, .850);
		glVertex2f(0.17, .535);
		glVertex2f(0.2, .51);
	glEnd();
}

void tensMiddle(){
	glBegin(GL_POLYGON); //middle tens
		glColor3f(1.0,1.0,1.0);
		glVertex2f(0.17, .497);
		glVertex2f(-0.19, .497);
		glVertex2f(-0.1667, .542);
		glVertex2f(0.15, .542);
	glEnd();
}
void tensBottomRight(){
	glBegin(GL_POLYGON);  // bottom right tens
		glColor3f(1.0,1.0,1.0);
		glVertex2f(0.2, .505);
		glVertex2f(0.17, .48);
		glVertex2f(0.17, .165);
		glVertex2f(0.2, .14);
	glEnd();
}
void tensBottom(){
	glBegin(GL_POLYGON); //bottom tens
		glColor3f(1.0,1.0,1.0);
		glVertex2f(0.19, .115);
		glVertex2f(-0.19, .115);
		glVertex2f(-0.17, .163);
		glVertex2f(0.17, .163);
	glEnd();
}
void tensBottomLeft(){
	glBegin(GL_POLYGON);  // bottom left tens
		glColor3f(1.0,1.0,1.0);
		glVertex2f(-0.21, .505);
		glVertex2f(-0.18, .48);
		glVertex2f(-0.18, .165);
		glVertex2f(-0.21, .14);
	glEnd();
}
void tensTopLeft(){
	glBegin(GL_POLYGON);  // top left tens
		glColor3f(1.0,1.0,1.0);
		glVertex2f(-0.21, .877);
		glVertex2f(-0.18, .852);
		glVertex2f(-0.18, .537);
		glVertex2f(-0.21, .512);
	glEnd();
}
void hundredsTop(){
	glBegin(GL_POLYGON); //top hundreds
		glColor3f(1.0,1.0,1.0);
		glVertex2f(-0.31, .905);
		glVertex2f(-0.69, .905);
		glVertex2f(-0.67, .860);
		glVertex2f(-0.33, .860);
	glEnd();
}
void hundredsTopRight(){
	glBegin(GL_POLYGON);  // top right hundreds
		glColor3f(1.0,1.0,1.0);
		glVertex2f(-0.3, .875);
		glVertex2f(-0.33, .850);
		glVertex2f(-0.33, .535);
		glVertex2f(-0.3, .51);
	glEnd();
}
void hundredsMiddle(){
	glBegin(GL_POLYGON); //middle hundreds
		glColor3f(1.0,1.0,1.0);
		glVertex2f(-0.33, .497);
		glVertex2f(-0.69, .497);
		glVertex2f(-0.6667, .542);
		glVertex2f(-0.35, .542);
	glEnd();
}
void hundredsBottomRight(){
	glBegin(GL_POLYGON);  // bottom right hundreds
		glColor3f(1.0,1.0,1.0);
		glVertex2f(-0.3, .505);
		glVertex2f(-0.33, .48);
		glVertex2f(-0.33, .165);
		glVertex2f(-0.3, .14);
	glEnd();
}
void hundredsBottom(){
	glBegin(GL_POLYGON); //bottom hundreds
		glColor3f(1.0,1.0,1.0);
		glVertex2f(-0.31, .115);
		glVertex2f(-0.69, .115);
		glVertex2f(-0.67, .163);
		glVertex2f(-0.33, .163);
	glEnd();
}
void hundredsBottomLeft(){
	glBegin(GL_POLYGON);  // bottom left hundreds
		glColor3f(1.0,1.0,1.0);
		glVertex2f(-0.71, .505);
		glVertex2f(-0.68, .48);
		glVertex2f(-0.68, .165);
		glVertex2f(-0.71, .14);
	glEnd();
}
void hundredsTopLeft(){
	glBegin(GL_POLYGON);  // top left hundreds
		glColor3f(1.0,1.0,1.0);
		glVertex2f(-0.71, .877);
		glVertex2f(-0.68, .852);
		glVertex2f(-0.68, .537);
		glVertex2f(-0.71, .512);
	glEnd();
}
void scoreBoard(){
	
	if (singles == 0){
		singlesTop();
		singlesTopLeft();
		singlesTopRight();
		singlesBottom();
		singlesBottomLeft();
		singlesBottomRight();
		
		glFlush();
	}
	else if(singles == 1){
		singlesTopRight();
		singlesBottomRight();
		glFlush();
	}
	else if(singles == 2){
		singlesTop();
		singlesTopRight();
		singlesMiddle();
		singlesBottomLeft();
		singlesBottom();
		glFlush();
	}
	else if (singles == 3){
		singlesTop();
		singlesTopRight();
		singlesMiddle();
		singlesBottomRight();
		singlesBottom();
		glFlush();
	}
	else if(singles == 4){
		singlesTopLeft();
		singlesTopRight();
		singlesMiddle();
		singlesBottomRight();
		glFlush();
	}
	else if(singles == 5){
		singlesTop();
		singlesTopLeft();
		singlesMiddle();
		singlesBottomRight();
		singlesBottom();
		glFlush();
	}
	else if(singles == 6){
		singlesTop();
		singlesTopLeft();
		singlesMiddle();
		singlesBottom();
		singlesBottomLeft();
		singlesBottomRight();
		glFlush();
	}
	else if(singles == 7){
		singlesTop();
		singlesTopRight();
		singlesBottomRight();
		glFlush();
	}
	else if(singles == 8){
		singlesTop();
		singlesTopLeft();
		singlesTopRight();
		singlesMiddle();
		singlesBottomLeft();
		singlesBottomRight();
		singlesBottom();
		glFlush();
	}
	else{
		singlesTop();
		singlesTopLeft();
		singlesTopRight();
		singlesMiddle();
		singlesBottomRight();
		singlesBottom();
		glFlush();
	}
	// --------------------Tens--------------
	if (tens == 0){
		tensTop();
		tensTopLeft();
		tensTopRight();
		tensBottom();
		tensBottomLeft();
		tensBottomRight();
		glFlush();
	}
	else if(tens == 1){
		tensTopRight();
		tensBottomRight();
		glFlush();
	}
	else if(tens == 2){
		tensTop();
		tensTopRight();
		tensMiddle();
		tensBottomLeft();
		tensBottom();
		glFlush();
	}
	else if (tens == 3){
		tensTop();
		tensTopRight();
		tensMiddle();
		tensBottomRight();
		tensBottom();
		glFlush();
	}
	else if(tens == 4){
		tensTopLeft();
		tensTopRight();
		tensMiddle();
		tensBottomRight();
		glFlush();
	}
	else if(tens == 5){
		tensTop();
		tensTopLeft();
		tensMiddle();
		tensBottomRight();
		tensBottom();
		glFlush();
	}
	else if(tens == 6){
		tensTop();
		tensTopLeft();
		tensMiddle();
		tensBottom();
		tensBottomLeft();
		tensBottomRight();
		glFlush();
	}
	else if(tens == 7){
		tensTop();
		tensTopRight();
		tensBottomRight();
		glFlush();
	}
	else if(tens == 8){
		tensTop();
		tensTopLeft();
		tensTopRight();
		tensMiddle();
		tensBottomLeft();
		tensBottomRight();
		tensBottom();
		glFlush();
	}
	else{
		tensTop();
		tensTopLeft();
		tensTopRight();
		tensMiddle();
		tensBottomRight();
		tensBottom();
		glFlush();
	}
	// --------------------hundreds-------------
	if (hundreds == 0){
		hundredsTop();
		hundredsTopLeft();
		hundredsTopRight();
		hundredsBottom();
		hundredsBottomLeft();
		hundredsBottomRight();
		glFlush();
	}
	else if(hundreds == 1){
		hundredsTopRight();
		hundredsBottomRight();
		glFlush();
	}
	else if(hundreds == 2){
		hundredsTop();
		hundredsTopRight();
		hundredsMiddle();
		hundredsBottomLeft();
		hundredsBottom();
		glFlush();
	}
	else if (hundreds == 3){
		hundredsTop();
		hundredsTopRight();
		hundredsMiddle();
		hundredsBottomRight();
		hundredsBottom();
		glFlush();
	}
	else if(hundreds == 4){
		hundredsTopLeft();
		hundredsTopRight();
		hundredsMiddle();
		hundredsBottomRight();
		glFlush();
	}
	else if(hundreds == 5){
		hundredsTop();
		hundredsTopLeft();
		hundredsMiddle();
		hundredsBottomRight();
		hundredsBottom();
		glFlush();
	}
	else if(hundreds == 6){
		hundredsTop();
		hundredsTopLeft();
		hundredsMiddle();
		hundredsBottom();
		hundredsBottomLeft();
		hundredsBottomRight();
		glFlush();
	}
	else if(hundreds == 7){
		hundredsTop();
		hundredsTopRight();
		hundredsBottomRight();
		glFlush();
	}
	else if(hundreds == 8){
		hundredsTop();
		hundredsTopLeft();
		hundredsTopRight();
		hundredsMiddle();
		hundredsBottomLeft();
		hundredsBottomRight();
		hundredsBottom();
		glFlush();
	}
	else{
		hundredsTop();
		hundredsTopLeft();
		hundredsTopRight();
		hundredsMiddle();
		hundredsBottomRight();
		hundredsBottom();
		glFlush();
	}
	
}
void circle (){    // ------------------dodge balls
					
	
	float i;
	double sin(), cos();
	int j;
	
	glBegin(GL_POLYGON); 
		glColor3f(.709804,.254902,0.105882);
		aw = count*.0001 + .02;
		if(clash == 1 || clash == 3 || clash == 2){
			ay = ay;
			ax = ax;
		}
		else if(ay < -1.0){
			ay = 1.1;
			ax = xL;
			countedA = 0;
		}
		else if( count > 75 && singles == 6){
			ax = (xR + xL)/2;
			ay = ay + fay;
		}
		else{
			ay = ay + fay;
		}
		
		clashCheck();
		for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
		{
			glVertex2f(aw*sin(i)+ax,aw*cos(i)+ay);
		}
		glBegin(GL_POLYGON); 
			glColor3f(.556863,0.184314,0.082353);
			for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
			{
				glVertex2f(aw*sin(i)+ax,aw*cos(i)+ay);
			}
	glEnd();
	
	glBegin(GL_POLYGON); 
		glColor3f(.709804,.254902,0.105882);
		bw = count*.00002 + .02;
		if(clash == 1 || clash == 3 || clash == 2){
			by = by;
			bx = bx;
		}
		else if(by < -1.8){
			by = 1.1;
			bx = xL + xR/4 ;
			countedB = 0;
		}
		else{
			by = by + bay;
		}
		
		clashCheck();
		for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
		{
			glVertex2f(bw*sin(i)+bx,bw*cos(i)+by);
		}
		glBegin(GL_POLYGON);
			glColor3f(.556863,0.184314,0.082353);
			for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
			{
				glVertex2f(bw*sin(i)+bx,bw*cos(i)+by);
			}
	glEnd();
	
	glBegin(GL_POLYGON); 
		glColor3f(.709804,.254902,0.105882);
		cw = 0.02 + (tens * .01);
		if(clash == 1 || clash == 3 || clash == 2){
			cy = cy;
			cx = cx;
		}
		else if(cy < -2.1){
			cy = 1.1;
			cx = xR;
			countedC = 0;
		}
		else{
			cy = cy + cay - (count * .00001);
		}
		
		clashCheck();
		for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
		{
			glVertex2f(cw*sin(i)+cx,cw*cos(i)+cy);
		}
		glBegin(GL_POLYGON);
			glColor3f(.556863,0.184314,0.082353);
			for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
			{
				glVertex2f(cw*sin(i)+cx,cw*cos(i)+cy);
			}
	glEnd();
	
	glBegin(GL_POLYGON); 
		glColor3f(.709804,.254902,0.105882);
		dw = .02 + (hundreds * .05);
		if(clash == 1 || clash == 3 || clash == 2){
			dy = dy;
			dx = dx;
		}
		else if(dy < -21.0){
			dy = 1.1;
			dx = (xR - xL) /2;
			countedD = 0;
		}
		else if( count > 50 && singles == 4){
			dx = (xR + xL)/2;
			dy = dy + day - (tens * .001);
		}
		else{
			dy = dy + day - (tens * .001);
		}
		
		clashCheck();
		for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
		{
			glVertex2f(dw*sin(i)+dx,dw*cos(i)+dy);
		}
		glBegin(GL_POLYGON);
			glColor3f(.556863,0.184314,0.082353);
			for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
			{
				glVertex2f(dw*sin(i)+dx,dw*cos(i)+dy);
			}		
	glEnd();
	glBegin(GL_POLYGON); 
		glColor3f(.709804,.254902,0.105882);
		fw = .02 + (singles *.001) + (tens * .001);
		if(clash == 1 || clash == 3 || clash == 2){
			fy = fy;
			fx = fx;
		}
		else if(dy < -14.0){
			fy = 1.1;
			fx = (xR - xL) /2;
			countedF = 0;
		}
		else{
			fy = fy + fay - (singles * .001);
		}
		
		for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
		{
			glVertex2f(fw*sin(i)+fx-.09,fw*cos(i)+fy-.09);
		}
		glBegin(GL_POLYGON);
			glColor3f(.556863,0.184314,0.082353);
			for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
			{
				glVertex2f(fw*sin(i)+fx-.09,fw*cos(i)+fy-.09);
			}
		
	glEnd();
		glBegin(GL_POLYGON); 
		glColor3f(.709804,.254902,0.105882);
		gw = 0.02 + (count * .00004) + (singles * .00004) + (tens * .00004) + (hundreds * .0004);
		if(clash == 1 || clash == 3 || clash == 2){
			gy = gy;
			gx = gx;
		}
		else if(gy < -7.0){
			gy = 1.1;
			gx = (xR - xL) /2;
			countedG = 0;
		}
		else{
			gy = gy + gey + (tens * singles * .0001);
		}
		clashCheck();
		for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
		{
			glVertex2f(0.02*sin(i)+gx+.09,0.02*cos(i)+gy+.09);
		}
		glBegin(GL_POLYGON);
			glColor3f(.556863,0.184314,0.082353);
			for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
			{
				glVertex2f(0.02*sin(i)+gx+.09,0.02*cos(i)+gy+.09);
			}
	glEnd();
	
	glBegin(GL_POLYGON); 
		glColor3f(.709804,.254902,0.105882);
		ew = 0.02 + (hundreds * singles * .0015);
		if(clash == 1 || clash == 3 || clash == 2){
			ey = ey;
			ex = ex;
		}
		else if(ey < -1.6){
			ey = 1.1;
			ex = xR - xL;
		}
		else if( count > 25 && singles == 8){
			ex = (xR + xL)/2;
			ey = ey + fey;
		}
		else{
			ey = ey + fey;
		}
		
		clashCheck();
		for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
		{
			glVertex2f(ew*sin(i)+ex,ew*cos(i)+ey);
		}
		glBegin(GL_POLYGON);
			glColor3f(.556863,0.184314,0.082353);
			for (i = 0; i<2*(3.141592654); i = i+(2*(3.141592654))/100)
			{
				glVertex2f(ew*sin(i)+ex,ew*cos(i)+ey);
			}
	glEnd();
	
	
}
void board(){
	glEnable(GL_BLEND);
	glBegin(GL_POLYGON);
       glColor4f(0.2745, 0.2, 0.1250, 0.4);
		 if(clash == 0){
		 if(xL + x1 < -1.0 || xR + x1 > 1.0){
			xL = xL;
			xR = xR;
		 }
		 else{
			 xL = xL + x1;
			 xR = xR + x1;
		 }
		}
		else{
			xL = xL;
			xR = xR;
		}
		 
		 
	   glVertex3f(xL, -0.93f, 0.0f);
	   glVertex3f(xL, -0.90f, 0.0f);
	   glVertex3f(xR, -0.90f, 0.0f);
	   glVertex3f(xR, -0.93f, 0.0f);
	   
	   glBegin(GL_POLYGON);
	   glColor4f(.48, .48, .419, 0.4);
	   glVertex3f(xL, -0.93f, 0.0f);
	   glVertex3f(xL, -0.90f, 0.0f);
	   glVertex3f(xR, -0.90f, 0.0f);
	   glVertex3f(xR, -0.93f, 0.0f);
	   
    glEnd();
}



void background (){
	glEnable(GL_BLEND);
	if(clash == 1){
		glBegin(GL_TRIANGLES);
       glColor4f(.5,0.0,0.0,0.8);
	   glVertex3f(-0.85f, -0.50f, 0.0f);
	   glVertex3f( 0.0f, -0.08f, 0.0f);
	   glVertex3f( 0.85f, -0.50f, 0.0f);
	      
    glEnd();
	}

	else if(clash == 0 || clash == 2){
		glBegin(GL_POLYGON);
			glColor4f(.1,.05,.05,.2);
			glVertex2f(-.9f, .9f);
			glVertex2f(-.1f, .9f);
			glVertex2f(-.1f, .1f);
			glVertex2f(-.9f, .1f);
		glBegin(GL_POLYGON);
			glColor4f(.45098,.08627,1.0,.2);
			glVertex2f(1.0f, 1.0f);
			glColor4f(.141176,.0784313,0.4431372,.2);
			glVertex2f(1.0f, -1.0f);
			glColor4f(.368627,.3490196,0.4862745,.2);
			glVertex2f(-1.0f, -1.0f);
			glColor4f(.37254901,.2431372,0.4784313,.2);
			glVertex2f(-1.0f, 1.0f);	
		glBegin(GL_POLYGON);
			glColor4f(.78,.45,.05,.2);
			glVertex2f(.9f, .9f);
			glVertex2f(.1f, .9f);
			glVertex2f(.1f, .1f);
			glVertex2f(.9f, .1f);	
		glBegin(GL_POLYGON);
			glColor4f(.78,.68,.25,.2);
			glVertex2f(.9f, -.9f);
			glVertex2f(.1f, -.9f);
			glVertex2f(.1f, -.1f);
			glVertex2f(.9f, -.1f);	
		glBegin(GL_POLYGON);
			glColor4f(.18,.68,.75,.2);
			glVertex2f(-.9f, -.9f);
			glVertex2f(-.1f, -.9f);
			glVertex2f(-.1f, -.1f);
			glVertex2f(-.9f, -.1f);				
		glBegin(GL_TRIANGLES);
			glColor4f(0.3,0.7,0.5,0.8);
			glVertex3f(-0.85f, -0.50f, 0.0f);
			glVertex3f( -0.0f, -0.08f, 0.0f);
			glVertex3f( -0.85f, -0.50f, 0.0f);
		glBegin(GL_TRIANGLES);
			glColor4f(0.3,0.7,0.3,0.8);
			glVertex3f(-0.85f, -0.50f, 0.0f);
			glVertex3f( 0.0f, -0.08f, 0.0f);
			glVertex3f( 0.85f, -0.50f, 0.0f);
	  	glBegin(GL_POLYGON);
			glColor4f(0.1,.84,.32,.2);
			glVertex2f(-.8f,.54f);
			glVertex2f(-.6f,.67f);
			glVertex2f(-.2f,.4f);
			glVertex2f(-.5f,.85f);
    glEnd();
	if (clash == 2){
		glBegin(GL_POLYGON);
			glColor4f(.8,.8,.8,.2);
			glVertex2f(-1.0f,1.0f);
			glVertex2f(-1.0f,-1.0f);
			glVertex2f(1.0f,-1.0f);
			glVertex2f(1.0f,1.0f);
		glEnd();
	}
	}
}

void display(void)
{	
	
	glColor4f(1.0,1.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
	
	background();
	board();
	scoreBoard();
	
	circle();
	counter();
	clashCheck();
	
	
	glutSwapBuffers();
	
}
pause(){
	if (clash == 3){
		clash = 0;
	}
	else clash = 3;
}

beginGame(){
	if(clash == 2){
		clash = 0;
	}
	if(clash == 1){
		xL = -.1; xR = .1; fay = -.005; bay = -.003f; cay = -.009f; day = -.012f; gey = -.012f; fey = -.006f; ay= -1.0; by=-1.0; cy= -1.0; dy= -1.10; ey= -1.2;  fy = -1.10; gy = -1.10;
		clash = 2; count = 0; singles =0; tens =0; hundreds =0;
		countedA = 0; countedB = 0; countedC = 0; countedD = 0; countedE = 0; countedF = 0; countedG = 0;
		startGame = 0;
	}
}

void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
			exit(0);
			break;
        case 'q':
            exit(0);
            break;
		case 'a':
			x1 = -.01;
			break;
		case 'd':
			x1 = .01;
			break;
		case 's':
			x1 = 0;
			break;
		case 'w':
			by = by + bay;
			break;
		case 'Q':
            exit(0);
            break;
		case 'A':
			x1 = -.01;
			break;
		case 'D':
			x1 = .01;
			break;
		case 'S':
			x1 = 0;
			break;
		case 'W':
			by = by + bay;
			break;	
		case 32:
			beginGame();
			break;
		case 'p':
			pause();
			break;
		case 'P':
			pause();
			break;
    }
    glutPostRedisplay();
}
 
void arrows( int key2, int x, int y){
		
	switch(key2)
	{
		case GLUT_KEY_RIGHT:
			x1 = .01;
			break;
		case GLUT_KEY_LEFT:
			x1 = -.01;
			break;
		case GLUT_KEY_UP:
			by = by +bay;
			break;
		case GLUT_KEY_DOWN:
			x1 = 0;
			break;
			
	}
		
		glutPostRedisplay();
}

 
void idle(void)
{	
    glutPostRedisplay();
}
 
/* Program entry point */
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1000,1000);
    glutInitWindowPosition(0.0,0.0);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
 
    glutCreateWindow("DodgeBall Game  by Justin Chilleo");
 
    
    glClearColor(0.0,0.0,0.0,0.0);
	glutDisplayFunc(display);
    glutKeyboardFunc(key);
	glutSpecialFunc(arrows);
    glutIdleFunc(idle);
	glEnable(GL_BLEND);
	glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glutMainLoop();
	
   
}