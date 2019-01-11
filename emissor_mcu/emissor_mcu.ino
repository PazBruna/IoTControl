#include <IRremoteESP8266.h>
#include <IRremoteInt.h>

IRsend irsend(14); //FUNÇÃO RESPONSÁVEL PELO MÉTODO DE ENVIO DO SINAL IR / UTILIZA O GPIO14(D5)

int tamanho = 100; //TAMANHO DA LINHA RAW(68 BLOCOS)
int frequencia = 32; //FREQUÊNCIA DO SINAL IR(32KHz)

// BOTÃO LIGA / DESLIGA
unsigned int LD[100] = {9050, 4500, 600, 1750, 600, 1700, 600,600,600,600,600,600,600,600,600,1700,600,1750,600,1750,600,1700,600,1750,600,1750,600,1750,600,1750,600,1800,600,600,550,600,600,600,550,600,600,600,600,600,600,1750,600,1750,600,1750,600,600,600,600,550,1750,600,600,550,1800,550,1800,550,600,600,600,600,600,550,600,600,600,550,600,600,600,550,1800,600,600,600,1800,600,650,550,600,600,550,600,600,600,600,600,600,600,600,600,600,600}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO EJECT
//unsigned int EJ[100] = {}; //UTILIZADO PARA APARELHOS DE SOM
// BOTÃO MUTE
unsigned int MT[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO PLAY / PAUSE
unsigned int PP[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO VOLTAR
unsigned int VT[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO ADIANTAR
unsigned int AT[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO UM
unsigned int UM[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO DOIS
unsigned int DOIS[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO TRES
unsigned int TRES[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO QUATRO
unsigned int QUATRO[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO CINCO
unsigned int CINCO[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO SEIS
unsigned int SEIS[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO SETE
unsigned int SETE[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO OITO
unsigned int OITO[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO NOVE
unsigned int NOVE[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO AUMENTAR VOLUME
unsigned int VMAIS[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO ZERO
unsigned int ZERO[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO AVANÇAR CANAIS
unsigned int CMAIS[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO ENTRADAS
unsigned int ENTRADAS[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO DIMINUIR VOLUME
unsigned int VMENOS[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO OK
unsigned int BOTAOOK[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
// BOTÃO VOLTAR CANAIS
unsigned int CMENOS[100] = {}; //COLE A LINHA RAW CORRESPONDENTE DENTRO DAS CHAVES
 
void setup(){
  irsend.begin(); //INICIALIZA A FUNÇÃO
  Serial.begin(115200); //INICIALIZA A PORTA SERIAL
}
void loop(){
    
    char c = Serial.read(); //VARIÁVEL RESPONSÁVEL POR RECEBER O CARACTER DIGITADO NA JANELA SERIAL
    
    if (c == 'a'){ //SE CARACTER DIGITADO FOR IGUAL A "a", FAZ
        irsend.sendRaw(LD,tamanho,frequencia);  // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Liga / Desliga");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'b'){ //SE CARACTER DIGITADO FOR IGUAL A "b", FAZ
        irsend.sendRaw(MT,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Mute");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'c'){ //SE CARACTER DIGITADO FOR IGUAL A "c", FAZ
        irsend.sendRaw(PP,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Play / Pause");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'd'){ //SE CARACTER DIGITADO FOR IGUAL A "d", FAZ
        irsend.sendRaw(VT,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Faixa Anterior");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'e'){ //SE CARACTER DIGITADO FOR IGUAL A "e", FAZ
        irsend.sendRaw(AT,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Proxima Faixa");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'f'){ //SE CARACTER DIGITADO FOR IGUAL A "f", FAZ
        irsend.sendRaw(UM,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Um");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'g'){ //SE CARACTER DIGITADO FOR IGUAL A "g", FAZ
        irsend.sendRaw(DOIS,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Dois");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'h'){ //SE CARACTER DIGITADO FOR IGUAL A "h", FAZ
        irsend.sendRaw(TRES,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Tres");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'i'){ //SE CARACTER DIGITADO FOR IGUAL A "i", FAZ
        irsend.sendRaw(QUATRO,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Quatro");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'j'){ //SE CARACTER DIGITADO FOR IGUAL A "j", FAZ
        irsend.sendRaw(CINCO,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Cinco");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'k'){ //SE CARACTER DIGITADO FOR IGUAL A "k", FAZ
        irsend.sendRaw(SEIS,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Seis");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'l'){ //SE CARACTER DIGITADO FOR IGUAL A "l", FAZ
        irsend.sendRaw(SETE,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Sete");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'm'){ //SE CARACTER DIGITADO FOR IGUAL A "m", FAZ
        irsend.sendRaw(OITO,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Oito");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'n'){ //SE CARACTER DIGITADO FOR IGUAL A "n", FAZ
        irsend.sendRaw(NOVE,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Nove");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'o'){ //SE CARACTER DIGITADO FOR IGUAL A "o", FAZ
        irsend.sendRaw(VMAIS,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Aumentar Volume");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'p'){ //SE CARACTER DIGITADO FOR IGUAL A "p", FAZ
        irsend.sendRaw(ZERO,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Diminuir Volume");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'q'){ //SE CARACTER DIGITADO FOR IGUAL A "q", FAZ
        irsend.sendRaw(CMAIS,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Proximo Canal");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'r'){ //SE CARACTER DIGITADO FOR IGUAL A "r", FAZ
        irsend.sendRaw(ENTRADAS,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Mudar Entrada");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 's'){ //SE CARACTER DIGITADO FOR IGUAL A "s", FAZ
        irsend.sendRaw(VMENOS,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Diminuir Volume");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 't'){ //SE CARACTER DIGITADO FOR IGUAL A "t", FAZ
        irsend.sendRaw(BOTAOOK,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: OK");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
    if (c == 'u'){ //SE CARACTER DIGITADO FOR IGUAL A "u", FAZ
        irsend.sendRaw(CMENOS,tamanho,frequencia); // PARÂMETROS NECESSÁRIOS PARA ENVIO DO SINAL IR
        Serial.println("Comando enviado: Canal Anterior");
        delay(50); // TEMPO(EM MILISEGUNDOS) DE INTERVALO ENTRE UM COMANDO E OUTRO
    }
}
