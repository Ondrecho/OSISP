#!/bin/bash

echo "Запуск qmake..."
qmake ../../src/RemoteControlServer

echo "Очистка и сборка проекта..."
make clean all

clear

echo "Запуск сервера..."
./RemoteControlServer
