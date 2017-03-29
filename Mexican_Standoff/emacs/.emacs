;;Load general features files
(setq config_files "/usr/share/emacs/site-lisp/")
(setq load-path (append (list nil config_files) load-path))

(load "list.el")
(load "string.el")
(load "comments.el")
(load "header.el")

;;load personnal files
;;(setq config_files "~/")
;;(load "header.el")

(set-language-environment "UTF-8")
(add-to-list 'load-path "~/")

;;Charge les dependances
(load "cl-lib-0.5.el")
(load "autopair.el")
(require 'autopair)

;;Indentation avec les tabulations
(setq-default tab-width 4)
(setq-default indent-tabs-mode t)
(setq-default c-basic-offset 4)
(setq-default c-default-style "linux")
(setq-default tab-stop-list '(4 8 12 16 20 24 28 32 36 40 44 48 52 56 60
                             64 68 72 76 80 84 88 92 96 100 104 108 112 116 120))

;;Sauvegarde les fichiers *~ dans le dossier .emacs.d
(setq backup-directory-alist
      '(("." . "~/.emacs.d")))
(setq backup-by-copying 1)

;;Surligne et affiche la colone de position du curseur
(column-number-mode)

;;Fermeture de la parenthese automatique
(autopair-global-mode 1)

;;Colorise en Rouge les espaces en fin de ligne
(setq-default show-trailing-whitespace t)

;;Colorise les doubles espaces et plus
(global-hi-lock-mode 1)
(add-hook 'change-major-mode-hook (lambda()(highlight-regexp " \\{2,\\}") ))