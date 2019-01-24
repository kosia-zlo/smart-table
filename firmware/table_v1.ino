/*
  ПО умного рабочего стола
  Версия: 0.1a
  Сборка : 1
  Дата : 23.01.2019
*/


/*
  Управление столом происходит через специальное мобильное приложение
  Так же стол автоматические выбирает сценарии работы в зависимости от настроек стола в прошивке и приложении
  
*/
// ************************** НАСТРОЙКИ ***********************
#define LED_IRK                      1 // 0- выкл 1-вкл  АВТОМАТИЧЕСКОЕ ВКЛЮЧЕНИЕ СВЕТА ПО ПРИБЛИЖЕНИЕ К СТОЛУ
//*************************** БИБЛИОТЕКИ ******************


//********************************МОДУЛИ ПОДКЛЮЧЁННЫЕ К системе

//*************************************ПЕРЕМЕННЫЕ*********************
const int movPin = 2;
const int relPin = 3;
const int relPin2 = 4;



void setup() {
 pinMode(movPin, INPUT);
 pinMode(relPin, OUTPUT);
 pinMode(relPin2, OUTPUT);

}

void loop() {
if (LED_IRK == 1) {
  svet_irk();
  }


}
void svet_irk(){  
  
int val = digitalRead(movPin);
if (val)
   digitalWrite(relPin, HIGH);
else
   digitalWrite(relPin, LOW);
  
  
  }
void bluetooth(){
  
  
  
  }
void opros(){
  
  }

  
void holod(){
  
  
  }

void hot(){


}
void dver(){

  
}

   

  

  
