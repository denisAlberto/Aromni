[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]


<br />
<p align="center">
  <a href="https://github.com/denisAlberto/Aromni">
    <img src="imagens/logo.png" alt="Aromni IOT" title="Aromni IOT" width="280" />
  </a>

  <h3 align="center">Eugenio Challenge Hub (Natura) - #TIME 15</h3>

  <p align="center">
    O Aromni é um dispositivo IoT que exala aromas através de um sensor de proximidade, dessa forma, livre de contatos diretos com superfícies públicas. Como uma torneira automática, basta aproximar a mão no Aromni, que ele irá exalar a essência, promovendo uma experiência olfativa no cliente.
    <br /><br />
    <img src="imagens/prototipo_concept.png" alt="Conceito" width="900" />
    <br><br>
    <img src="imagens/protipo.jpeg" alt="Dispositivo Aromni" title="Dispositivo Aromni" />
    <br /> <br />
 
## Instruções

* Instale a IDE Arduino: [https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)<br>
* Na IDE Arduino vá em Files->Preferences e adicione em "Additional Boards Manager URLs:" a biblioteca da espressif "https://dl.espressif.com/dl/package_esp32_index.json" e clique em OK <br />
* Após a instalação, vá em Tools->Boards: e selecione a opção "ESP32 Dev Module"<br />
* Vá em Tools->Manage Libraries... e instale as seguintes bibliotecas: 
    
    * Brisoft library for HC-SR04
    * PubSubClient - Nick O´Leary
* No arquivo secrets.h substitua os defines de SSID e PASSWORD com os dados da sua rede WiFi e também o define de DEVICE_ID e as variáveis "cacert", "client_cert" e "privkey" seguindo os passos da documentação da plataforma Eugenio [https://docs.stg.eugenio.io/information/devices/deviceConnection]

<br /><br />

## Circuíto
<p align="center">
<img  src="imagens/circuito.png" alt="esquema" title="Esquema Elétrico" />
<br /> <br />
</p>


## Outros

<b>Linguagem:</b> C++<br />
<br />
## License

Distribuído sob a licença MIT. Veja `LICENSE` para mais informações.

<br />

## Time

<a href="https://github.com/geneuto/">@Francisco Geneuto - Desenvolvedor</a><br>
<a href="https://github.com/denisAlberto/">@Denis Alberto - Desenvolvedor IOT</a><br>
<a href="https://www.linkedin.com/in/luckmattos/">@Lucas Mattos - Ux Design</a><br>
<a href="https://www.linkedin.com/in/sergiosilva-business/">@Sérgio Silva - Business</a><br>
<a href="https://eueomundo.com/">@Felipe Rafael - Comunicação</a>

Dashboard Project Link: [https://github.com/geneuto/aromni](https://github.com/geneuto/aromni)<br>
Hardware Project Link: [https://github.com/denisAlberto/Aromni](https://github.com/denisAlberto/Aromni)


[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=flat-square
[license-url]: https://github.com/geneuto/aromni/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=flat-square&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/denis-alberto-silverio-11014925/
[product-screenshot]: template/scren_aromni01.png
