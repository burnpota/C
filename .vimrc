set nu
set ai
set ts=4
set ignorecase
colo evening
map <F2> :w<CR>:!gcc -o %< %<CR>:!./%<<CR>
map <F3> :q<CR>
map <F4> i#include <stdio.h><CR>int main(void){<CR><CR><Tab>return 0;<cr><bs>}<ESC>kk
imap <F5> while()<left>
imap <F6> for()<left>
imap <F7> if()<left>
imap <F8> else if()<left>
imap <C-b> <esc>A{<cr>}<esc>O<tab>
imap <C-v> <esc>$xjddk$i
imap <C-n> <esc>o<tab>
