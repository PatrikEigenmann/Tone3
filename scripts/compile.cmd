@echo off
dir /S /B src\*.java > sources.txt
javac -d build @sources.txt
