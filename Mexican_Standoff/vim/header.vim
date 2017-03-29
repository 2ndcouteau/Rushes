let s:logname = $LOGNAME
function s:addCharacter(line, limit, character)
	let line = a:line
	let i = strlen(line)
	while i < a:limit
		let line = line . a:character
		let i += 1
	endwhile
	return line
endfunction

function AddHeader()
	let email = $EMAIL
	let filename = expand("%:t")
	let linelist = []
	let i = 0

	if strlen(email) == 0
		let email = "marvin@42.fr"
	endif
   	call add(linelist, s:addCharacter("/* ", 77, "*") . " */")
   	call add(linelist, s:addCharacter("/*", 78, " ") . "*/")
   	call add(linelist, s:addCharacter("/*   Updated: " . strftime("%Y/%m/%d %H:%M:%S") . " by " . s:logname, 50, " ") . "    ###   ########.fr       */")
   	call add(linelist, s:addCharacter("/*   Created: " . strftime("%Y/%m/%d %H:%M:%S") . " by " . s:logname, 50, " ") . "     #+#    #+#             */")
   	call add(linelist, s:addCharacter("/*", 50, " ") . "+#+#+#+#+#+   +#+           */")
   	call add(linelist, s:addCharacter("/*   By : " . s:logname. " <" . email . ">", 50, " ") . "  +#+  +:+       +#+        */")
   	call add(linelist, s:addCharacter("/*", 50, " ") . "    +:+ +:+         +:+     */")
   	call add(linelist, s:addCharacter("/*   " . filename, 50, " ") . "      :+:      :+:    :+:   */")
   	call add(linelist, s:addCharacter("/*", 50, " ") . "        :::      ::::::::   */")
   	call add(linelist, s:addCharacter("/*", 78, " ") . "*/")
   	call add(linelist, s:addCharacter("/* ", 77, "*") . " */")
	while i < len(linelist)
		call append(0 , linelist[i])
		let i += 1
	endwhile
endfunction

function s:updateHeader()
	if &modified
		let currentline = getline(9)
		if currentline =~ "/*   Updated: [0-9]"
			call setline(9, s:addCharacter("/*   Updated: " . strftime("%Y/%m/%d %H:%M:%S") . " by " . s:logname, 50, " ") . "    ###   ########.fr       */")
		endif
	endif
endfunction

nmap <silent> <C-c><C-h> :call AddHeader()<CR>
autocmd BufWritePre * call s:updateHeader()
