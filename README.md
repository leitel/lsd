**LED-Spinning Display**

 Funciona utilizando o conceito de Persistence of Vision, baseada no fato de que uma imagem permanece na visão humana por 1/16 segundos. Ele funciona com uma fileira de leds que giram, em uma velocidade suficientemente alta, de maneira que, acendendo e apagando os leds em momentos corretos, seja possível montar uma imagem.
 
 O display montado possui 8 LEDs enfileirados e pode funcionar como um display 8xN, onde N é definido pelos parâmetros passados de delay, que define o tamanho de uma coluna de LED (representando o comprimento de um pixel). Para o motor utilizado, alimentado com 5V, os valores para o delay podem ser encontrados da seguinte forma:
 
        (K * 215) + (C * P * 749) = 46120
        
K = parâmetro de delay para repetição da mensagem; C = número de caracteres apresentados no display; P = delay para apresentar cada coluna (isso define o comprimento do pixel).

Os valores constantes são relacionados a frequência do motor e duração do delay.

**Material**

 Para montagem, foram utilizados: BlackPill, placa perfurada, 8 LEDs azuis de alto brilho, 9 resistores de 330 ohm, suporte de madeira, bateria de 9v, plug usb micro B macho, botão, motor DC 12v 4000rpm (MMI-6H2LWSKC).

**Como utilizar**

 No código podem ser alterados: mensagem, delay para repetição, delay para apresentar cada coluna.
 
  *Mensagem:* Linha 112 no arquivo main.c
          
          ...
          displayString("MICRO");
          ...
  *Delay para repetição:* Linha 113 no arquivo main.c
  
          ...
          myDelayGlob(127);
          ...
          
   *Delay para apresentar cada coluna:* Linha 24 no arquivo lsd.c
   
          ...
          #define DELAY_TIME 5
          ...

 Com a estrutura mecânica, circuito montado e ligações físicas feitas corretamente, é possível utilizar a ferramenta Atollic para compilar o projeto. Após compilar, será gerado um arquivo ".hex". Com o arquivo ".hex" deve ser gerado um ".dfu", pelo software DFU Manager, e gravar este na placa Black Pill (verificar se os pinos B0 e B1 estão em 0), com o software DFUSeDemo. Os passos foram feitos seguindo o tutorial disponibilizado por Danilo Coutinho, Jorge Reis e Jardel Silveira (https://docs.google.com/document/d/1n9KK-A_yHHdOaetmvmMrMA06DhVJY9tP9MlUf6t6dvM/edit).
 
 
