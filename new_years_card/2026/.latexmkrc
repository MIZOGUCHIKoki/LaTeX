#!/usr/bin/env perl
$latex = 'lualatex -interaction=nonstopmode -synctex=1 -file-line-error %O %S';
$bibtex = 'upbibtex';
$biber = 'biber --bblencoding=utf8 -u -U --output_safechars';
#$dvipdf = 'dvipdfmx %O -o %D %S';
$pdf_mode = 3;

@generated_exts = ( 'aux', 'bcf', 'fls', 'idx', 'ind', 'lof', 'lot',
                'out', 'toc', 'dvi', 'snm', 'nav', 'bbl-SAVE-ERROR', 'log', 'run.xml');
