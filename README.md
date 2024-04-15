# Finger-AI-Recognition

## Description

Ce projet a pour objectif d'utiliser une intelligence artificielle pour compter le nombre de doigts d'une main.

Pour cela, une Jetson Nano sera utilisée pour le traitement de l'image, ainsi qu'une Arduino Uno pour le rendu de réponse à l'utilisateur.

## Fonctionnement

### Étape 1

Effectuer les branchements indiqués dans le répertoire [Branchement](https://github.com/Poblit0/Finger-AI-Recognition/tree/main/Branchement) afin de connecté la Jetson Nano et l'Arduino en I2C, mais aussi le servomoteur indiquant le nombre de doigts à l'utilisateur

### Étape 2

Téléverser le code dans la carte Arduino Uno qui se trouve dans le répertoire [Code pour l'Arduino](https://github.com/Poblit0/Finger-AI-Recognition/tree/main/Code%20pour%20l'Arduino)

### Étape 3

Suivre les informations pour entrainer le modèle à partie de la base de donnée d'image se trouvant dans le répertoire [Code pour la Jetson](https://github.com/Poblit0/Finger-AI-Recognition/tree/main/Code%20pour%20la%20Jetson)

### Étape 4

Vérifier les [Consignes d'utilisation](https://github.com/Poblit0/Finger-AI-Recognition/tree/main/Consignes%20d'utilisation) pour que le modèle fonctionne correctement
