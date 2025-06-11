@echo off
setlocal

:: Obtém o diretório onde o script está salvo
set "CURRENT_DIR=%CD%"

:: Caminho do executável do Git Bash
set "GIT_BASH=C:\Program Files\Git\git-bash.exe"

:: Abre o Git Bash na pasta atual
start "" "%GIT_BASH%" --cd="%CURRENT_DIR%"