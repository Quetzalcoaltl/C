/*
Dado o circuito abaixo, elabore um programa que aceletre e desacelere o motor, linearmente, entre 10 e 255 unidades de pwm,em intervalos de tempos de 500ms
*/

PWM(pulse width modulation)
#defineF_CPU 1600000000ul
void main(void)
{
	TCCR0A=_BV(COM0A1)|_BV(WGM01)|_BV(WGM00);// essa  configuração serve para setar o periodo de 4.096ms
	TCCR0B= _BV(CS02);//F_CPU/256;
	//DDRD =_BV(DDD5)|_BV(DDD6);
	DDRD =_BV(DDD6);
	OCR0A=10;// é usado para verificar o corte do pwm, ou seja a largura dos pulsos, 
	//OCR0B=127;
	char i;
	for(;;)
	{
	//sistema de delay
	
	
	if(++OCR0A==255)
		{
		OCR0A=10;
		}
		_delay_ms(500);
	// sitema para criar um loop que aumenta a velocidade de um motor
	}
	
}

//primier