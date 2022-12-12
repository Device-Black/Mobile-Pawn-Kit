# Mobile Pawn Kit - v1.1-Beta

Um kit para pawn no mobile! (MPK) <br>
**Suporte apenas entre os Android 5 e 10**

[![Lista de repositórios Stargazers para Device-Black/Mobile-Pawn-Kit](https://reporoster.com/stars/Device-Black/Mobile-Pawn-Kit)](https://github.com/Device-Black/Mobile-Pawn-Kit/stargazers)

## Instalando

Baixe e instale esse aplicativo: [UserLAnd](https://www.mediafire.com/file/oig8r0gzw15jg0y/UserLAnd_2.8.3.apk/file)

Selecione Ubuntu:
![Ubuntu Select](https://github.com/Device-Black/Mobile-Pawn-Kit/raw/DeviceBlack/images/imagem_01.jpg)

Preencha os dados:
![Info](https://github.com/Device-Black/Mobile-Pawn-Kit/raw/DeviceBlack/images/imagem_02.jpg)

Selecione SSH:
![SSH Select](https://github.com/Device-Black/Mobile-Pawn-Kit/raw/DeviceBlack/images/imagem_03.jpg)

Insira sua senha:
![Password Input](https://github.com/Device-Black/Mobile-Pawn-Kit/raw/DeviceBlack/images/imagem_04.jpg)

cole esse comando:

```bash
sudo apt update &&
sudo apt upgrade -y &&
sudo apt install git -y &&
git clone https://github.com/device-black/Mobile-Pawn-Kit.git &&
chmod +x Mobile-Pawn-Kit/installer && ./Mobile-Pawn-Kit/installer &&
rm -rf Mobile-Pawn-Kit && ln -s /host-rootfs/sdcard/ storage
```

## Duvidas/Problemas

Acesse a [wiki](https://github.com/Device-Black/Mobile-Pawn-Kit/wiki) para saber como usar os comandos, 
caso encontre algum erro, reporte-o 
[aqui](https://github.com/Device-Black/Mobile-Pawn-Kit/issues).

<hr>

[#Pawn♦️Team](https://discord.io/PawnTeam)
<a href="https://discord.io/PawnTeam"><img align="right" alt="PawnTeam - Discord" width="20px" src="https://img.icons8.com/color/512/discord--v2.png" /></a>
