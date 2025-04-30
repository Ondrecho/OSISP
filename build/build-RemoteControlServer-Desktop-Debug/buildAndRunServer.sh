#!/bin/bash

echo "Запуск qmake..."
qmake ../../src/RemoteControlServer

echo "Очистка и сборка проекта..."
make clean all

if [ ! -d "Screenshots" ]; then
    echo "Создание папки Screenshots..."
    mkdir Screenshots
fi

clear

echo "Запуск сервера..."
./RemoteControlServer
