syntax on
set number
set cindent
set directory=~/.vimrc.d
set ruler
highlight trailWhitespace ctermbg=grey guibg=grey
highlight multipleWhitespace ctermbg=red guibg=red
match trailWhitespace / \+$/
2match multipleWhitespace / \{2,\}/
inoremap ( ()
inoremap { {}
inoremap [ []
inoremap " ""
inoremap ' ''
