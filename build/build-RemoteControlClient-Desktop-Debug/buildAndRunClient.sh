#!/bin/bash

echo "Запуск qmake..."
qmake ../../src/RemoteControlClient

echo "Очистка и сборка проекта..."
make clean all

if [ ! -d "Screenshots" ]; then
    echo "Создание папки Screenshots..."
    mkdir Screenshots
fi

clear

echo "Запуск клиента..."
./RemoteControlClient
