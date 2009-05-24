// languages.h written by Mitchell Foral. mitchell<att>caladbolg.net.
// See COPYING for license information.

#ifndef OHCOUNT_LANGUAGES_H
#define OHCOUNT_LANGUAGES_H

#include <string.h>

#define LANG_ACTIONSCRIPT "actionscript"
#define LANG_ADA "ada"
#define LANG_ASSEMBLER "assembler"
#define LANG_AUTOCONF "autoconf"
#define LANG_AUTOMAKE "automake"
#define LANG_AWK "awk"
#define LANG_BAT "bat"
#define LANG_BLITZMAX "blitzmax"
#define LANG_BOO "boo"
#define LANG_C "c"
#define LANG_CLASSIC_BASIC "classic_basic"
#define LANG_CLEARSILVER "clearsilver"
#define LANG_CLEARSILVER_TEMPLATE "clearsilver_template"
#define LANG_CMAKE "cmake"
#define LANG_CPP "cpp"
#define LANG_CS_ASPX "cs_aspx"
#define LANG_CSHARP "csharp"
#define LANG_CSS "css"
#define LANG_DCL "dcl"
#define LANG_DMD "dmd"
#define LANG_DYLAN "dylan"
#define LANG_EBUILD "ebuild"
#define LANG_EIFFEL "eiffel"
#define LANG_ERLANG "erlang"
#define LANG_EXHERES "exheres"
#define LANG_EMACSLISP "emacslisp"
#define LANG_FACTOR "factor"
#define LANG_FORTRANFIXED "fortranfixed"
#define LANG_FORTRANFREE "fortranfree"
#define LANG_GLSL "glsl"
#define LANG_GROOVY "groovy"
#define LANG_HASKELL "haskell"
#define LANG_HAML "haml"
#define LANG_HAXE "haxe"
#define LANG_HTML "html"
#define LANG_JAVA "java"
#define LANG_JAVASCRIPT "javascript"
#define LANG_JSP "jsp"
#define LANG_LIMBO "limbo"
#define LANG_LISP "lisp"
#define LANG_LUA "lua"
#define LANG_MAKE "make"
#define LANG_MATLAB "matlab"
#define LANG_METAFONT "metafont"
#define LANG_METAPOST "metapost"
#define LANG_METAPOST_WITH_TEX "metapost_with_tex"
#define LANG_MXML "mxml"
#define LANG_NIX "nix"
#define LANG_OBJECTIVE_C "objective_c"
#define LANG_OBJECTIVE_J "objective_j"
#define LANG_OCAML "ocaml"
#define LANG_OCTAVE "octave"
#define LANG_PASCAL "pascal"
#define LANG_PERL "perl"
#define LANG_PHP "php"
#define LANG_PIKE "pike"
#define LANG_PYTHON "python"
#define LANG_R "r"
#define LANG_REXX "rexx"
#define LANG_RHTML "rhtml"
#define LANG_RUBY "ruby"
#define LANG_SCALA "scala"
#define LANG_SCHEME "scheme"
#define LANG_SCILAB "scilab"
#define LANG_SHELL "shell"
#define LANG_SMALLTALK "smalltalk"
#define LANG_STRATEGO "stratego"
#define LANG_STRUCTURED_BASIC "structured_basic"
#define LANG_SQL "sql"
#define LANG_TCL "tcl"
#define LANG_TEX "tex"
#define LANG_VALA "vala"
#define LANG_VB_ASPX "vb_aspx"
#define LANG_VHDL "vhdl"
#define LANG_VIM "vim"
#define LANG_VISUALBASIC "visualbasic"
#define LANG_XAML "xaml"
#define LANG_XML "xml"
#define LANG_XSLT "xslt"
#define LANG_XMLSCHEMA "xmlschema"

// For gperf.
struct LanguageMap { const char *key; const char *name; const char *nice_name; int category; };
struct LanguageMap *ohcount_hash_language_from_name(register const char *str, register unsigned int len);

#endif
