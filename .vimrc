set number
set relativenumber
set nocompatible

syntax enable
filetype plugin on

set path+=**
set wildmenu
command! MakeTags !ctags -R
