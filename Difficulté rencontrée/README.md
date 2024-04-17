## Afin d'établir la communciation I2C entre la Jetson Nano et l'Arduino il est préférable de vérifier l'importation de la librairie "smbus"

### Si lorsque vous effectuez le code du Jupyter Notebook [send_5_to_arduino.ipynb](https://github.com/Poblit0/Finger-AI-Recognition/blob/main/Difficult%C3%A9%20rencontr%C3%A9e/send_5_to_arduino.ipynb) vous obtenez l'erreur ci-dessous

![](https://github.com/Poblit0/Finger-AI-Recognition/blob/main/Difficult%C3%A9%20rencontr%C3%A9e/erreur.png)

### alors il faut entrer 2 commandes dans le terminal

D'abord t'écris cette commande :
```sudo apt-get update```
Puis cette commande :
```sudo apt-get install python3-smbus```
