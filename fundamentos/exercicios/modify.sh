#!/usr/bin/env bash

diretorio="$HOME/cpp/fundamentos/exercicios/"

while true; do
  arquivo_modificado=$(inotifywait -e modify --format "%w%f" $diretorio)
  
  if [[ $arquivo_modificado == *.cpp ]]; then
    nome_arquivo=$(basename "$arquivo_modificado")
    nome_executavel="${nome_arquivo%.cpp}"
    g++ "$diretorio/$nome_arquivo" -o "$diretorio/$nome_executavel"
    echo "Arquivo $nome_arquivo compilado e executável $nome_executavel criado."
  fi
done
