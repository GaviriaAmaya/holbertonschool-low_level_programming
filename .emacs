;; set background
(set-background-color "misterioso")
;; show cursor position within line
(column-number-mode 1)
;; Configure backspace
(global-set-key [(control ?h)] 'delete-backward-char)
;; set line numbers
(global-linum-mode 1) ; always show line numbers
(require 'whitespace)
(setq whitespace-style '(face empty lines-tail trailing))
(global-whitespace-mode t)
(setq c-default-style "bsd"
      c-basic-offset 8
      tab-width 8
      indent-tabs-mode t)
