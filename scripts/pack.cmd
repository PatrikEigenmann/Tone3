@echo off
if not exist bin mkdir bin
jar cfm bin\Tone3.jar manifest\MANIFEST.MF -C build .
