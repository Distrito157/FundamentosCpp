#!/usr/bin/env bash

diretorio="$HOME/cpp/fundamentos/ponteiros/"

if [[ $1 == *.cpp ]]; then
  nome_arquivo=$(basename "$1")
  nome_executavel="${nome_arquivo%.cpp}"
  g++ "$diretorio/$nome_arquivo" -o "$diretorio/$nome_executavel"
  echo "Arquivo $nome_arquivo compilado e executável $nome_executavel criado."
fi
