# Yandex Cup, Algorithm:Sprint 2022

## Qualification

- [ ] [A. Клетчатая доска](#Qualification-A)
- [x] [B. Необычное деление](#Qualification-B)
- [ ] [C. Почти квадратные числа](#Qualification-C)
- [ ] [D. Макс и синтез аминокислот](#Qualification-D)
- [ ] [E. Камень, ножницы, бумага](#Qualification-E)
- [ ] [F. Лифт](#Qualification-F)

На решение отводится 2 часа.

<hr>


<style type="text/css">.MathJax\_Hover\_Frame {border-radius: .25em; -webkit-border-radius: .25em; -moz-border-radius: .25em; -khtml-border-radius: .25em; box-shadow: 0px 0px 15px #83A; -webkit-box-shadow: 0px 0px 15px #83A; -moz-box-shadow: 0px 0px 15px #83A; -khtml-box-shadow: 0px 0px 15px #83A; border: 1px solid #A6D ! important; display: inline-block; position: absolute}
.MathJax\_Menu\_Button .MathJax\_Hover\_Arrow {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 4px; -webkit-border-radius: 4px; -moz-border-radius: 4px; -khtml-border-radius: 4px; font-family: 'Courier New',Courier; font-size: 9px; color: #F0F0F0}
.MathJax\_Menu\_Button .MathJax\_Hover\_Arrow span {display: block; background-color: #AAA; border: 1px solid; border-radius: 3px; line-height: 0; padding: 4px}
.MathJax\_Hover\_Arrow:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax\_Hover\_Arrow:hover span {background-color: #CCC!important}
</style><style type="text/css">#MathJax\_About {position: fixed; left: 50%; width: auto; text-align: center; border: 3px outset; padding: 1em 2em; background-color: #DDDDDD; color: black; cursor: default; font-family: message-box; font-size: 120%; font-style: normal; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; border-radius: 15px; -webkit-border-radius: 15px; -moz-border-radius: 15px; -khtml-border-radius: 15px; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax\_About.MathJax\_MousePost {outline: none}
.MathJax\_Menu {position: absolute; background-color: white; color: black; width: auto; padding: 5px 0px; border: 1px solid #CCCCCC; margin: 0; cursor: default; font: menu; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; border-radius: 5px; -webkit-border-radius: 5px; -moz-border-radius: 5px; -khtml-border-radius: 5px; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
.MathJax\_MenuItem {padding: 1px 2em; background: transparent}
.MathJax\_MenuArrow {position: absolute; right: .5em; padding-top: .25em; color: #666666; font-size: .75em}
.MathJax\_MenuActive .MathJax\_MenuArrow {color: white}
.MathJax\_MenuArrow.RTL {left: .5em; right: auto}
.MathJax\_MenuCheck {position: absolute; left: .7em}
.MathJax\_MenuCheck.RTL {right: .7em; left: auto}
.MathJax\_MenuRadioCheck {position: absolute; left: .7em}
.MathJax\_MenuRadioCheck.RTL {right: .7em; left: auto}
.MathJax\_MenuLabel {padding: 1px 2em 3px 1.33em; font-style: italic}
.MathJax\_MenuRule {border-top: 1px solid #DDDDDD; margin: 4px 3px}
.MathJax\_MenuDisabled {color: GrayText}
.MathJax\_MenuActive {background-color: #606872; color: white}
.MathJax\_MenuDisabled:focus, .MathJax\_MenuLabel:focus {background-color: #E8E8E8}
.MathJax\_ContextMenu:focus {outline: none}
.MathJax\_ContextMenu .MathJax\_MenuItem:focus {outline: none}
#MathJax\_AboutClose {top: .2em; right: .2em}
.MathJax\_Menu .MathJax\_MenuClose {top: -10px; left: -10px}
.MathJax\_MenuClose {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius: 18px; -khtml-border-radius: 18px; font-family: 'Courier New',Courier; font-size: 24px; color: #F0F0F0}
.MathJax\_MenuClose span {display: block; background-color: #AAA; border: 1.5px solid; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius: 18px; -khtml-border-radius: 18px; line-height: 0; padding: 8px 0 6px}
.MathJax\_MenuClose:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax\_MenuClose:hover span {background-color: #CCC!important}
.MathJax\_MenuClose:hover:focus {outline: none}
</style><style type="text/css">.MathJax\_Preview .MJXf-math {color: inherit!important}
</style><style type="text/css">.MJX\_Assistive\_MathML {position: absolute!important; top: 0; left: 0; clip: rect(1px, 1px, 1px, 1px); padding: 1px 0 0 0!important; border: 0!important; height: 1px!important; width: 1px!important; overflow: hidden!important; display: block!important; -webkit-touch-callout: none; -webkit-user-select: none; -khtml-user-select: none; -moz-user-select: none; -ms-user-select: none; user-select: none}
.MJX\_Assistive\_MathML.MJX\_Assistive\_MathML\_Block {width: 100%!important}
</style><style type="text/css">#MathJax\_Zoom {position: absolute; background-color: #F0F0F0; overflow: auto; display: block; z-index: 301; padding: .5em; border: 1px solid black; margin: 0; font-weight: normal; font-style: normal; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; -webkit-box-sizing: content-box; -moz-box-sizing: content-box; box-sizing: content-box; box-shadow: 5px 5px 15px #AAAAAA; -webkit-box-shadow: 5px 5px 15px #AAAAAA; -moz-box-shadow: 5px 5px 15px #AAAAAA; -khtml-box-shadow: 5px 5px 15px #AAAAAA; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax\_ZoomOverlay {position: absolute; left: 0; top: 0; z-index: 300; display: inline-block; width: 100%; height: 100%; border: 0; padding: 0; margin: 0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
#MathJax\_ZoomFrame {position: relative; display: inline-block; height: 0; width: 0}
#MathJax\_ZoomEventTrap {position: absolute; left: 0; top: 0; z-index: 302; display: inline-block; border: 0; padding: 0; margin: 0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
</style><style type="text/css">.MathJax\_Preview {color: #888}
#MathJax\_Message {position: fixed; left: 1px; bottom: 2px; background-color: #E6E6E6; border: 1px solid #959595; margin: 0px; padding: 2px 8px; z-index: 102; color: black; font-size: 80%; width: auto; white-space: nowrap}
#MathJax\_MSIE\_Frame {position: absolute; top: 0; left: 0; width: 0px; z-index: 101; border: 0px; margin: 0px; padding: 0px}
.MathJax\_Error {color: #CC0000; font-style: italic}
</style><style type="text/css">.MJXp-script {font-size: .8em}
.MJXp-right {-webkit-transform-origin: right; -moz-transform-origin: right; -ms-transform-origin: right; -o-transform-origin: right; transform-origin: right}
.MJXp-bold {font-weight: bold}
.MJXp-italic {font-style: italic}
.MJXp-scr {font-family: MathJax\_Script,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-frak {font-family: MathJax\_Fraktur,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-sf {font-family: MathJax\_SansSerif,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-cal {font-family: MathJax\_Caligraphic,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-mono {font-family: MathJax\_Typewriter,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-largeop {font-size: 150%}
.MJXp-largeop.MJXp-int {vertical-align: -.2em}
.MJXp-math {display: inline-block; line-height: 1.2; text-indent: 0; font-family: 'Times New Roman',Times,STIXGeneral,serif; white-space: nowrap; border-collapse: collapse}
.MJXp-display {display: block; text-align: center; margin: 1em 0}
.MJXp-math span {display: inline-block}
.MJXp-box {display: block!important; text-align: center}
.MJXp-box:after {content: " "}
.MJXp-rule {display: block!important; margin-top: .1em}
.MJXp-char {display: block!important}
.MJXp-mo {margin: 0 .15em}
.MJXp-mfrac {margin: 0 .125em; vertical-align: .25em}
.MJXp-denom {display: inline-table!important; width: 100%}
.MJXp-denom > * {display: table-row!important}
.MJXp-surd {vertical-align: top}
.MJXp-surd > * {display: block!important}
.MJXp-script-box > *  {display: table!important; height: 50%}
.MJXp-script-box > * > * {display: table-cell!important; vertical-align: top}
.MJXp-script-box > *:last-child > * {vertical-align: bottom}
.MJXp-script-box > * > * > * {display: block!important}
.MJXp-mphantom {visibility: hidden}
.MJXp-munderover {display: inline-table!important}
.MJXp-over {display: inline-block!important; text-align: center}
.MJXp-over > * {display: block!important}
.MJXp-munderover > * {display: table-row!important}
.MJXp-mtable {vertical-align: .25em; margin: 0 .125em}
.MJXp-mtable > * {display: inline-table!important; vertical-align: middle}
.MJXp-mtr {display: table-row!important}
.MJXp-mtd {display: table-cell!important; text-align: center; padding: .5em 0 0 .5em}
.MJXp-mtr > .MJXp-mtd:first-child {padding-left: 0}
.MJXp-mtr:first-child > .MJXp-mtd {padding-top: 0}
.MJXp-mlabeledtr {display: table-row!important}
.MJXp-mlabeledtr > .MJXp-mtd:first-child {padding-left: 0}
.MJXp-mlabeledtr:first-child > .MJXp-mtd {padding-top: 0}
.MJXp-merror {background-color: #FFFF88; color: #CC0000; border: 1px solid #CC0000; padding: 1px 3px; font-style: normal; font-size: 90%}
.MJXp-scale0 {-webkit-transform: scaleX(.0); -moz-transform: scaleX(.0); -ms-transform: scaleX(.0); -o-transform: scaleX(.0); transform: scaleX(.0)}
.MJXp-scale1 {-webkit-transform: scaleX(.1); -moz-transform: scaleX(.1); -ms-transform: scaleX(.1); -o-transform: scaleX(.1); transform: scaleX(.1)}
.MJXp-scale2 {-webkit-transform: scaleX(.2); -moz-transform: scaleX(.2); -ms-transform: scaleX(.2); -o-transform: scaleX(.2); transform: scaleX(.2)}
.MJXp-scale3 {-webkit-transform: scaleX(.3); -moz-transform: scaleX(.3); -ms-transform: scaleX(.3); -o-transform: scaleX(.3); transform: scaleX(.3)}
.MJXp-scale4 {-webkit-transform: scaleX(.4); -moz-transform: scaleX(.4); -ms-transform: scaleX(.4); -o-transform: scaleX(.4); transform: scaleX(.4)}
.MJXp-scale5 {-webkit-transform: scaleX(.5); -moz-transform: scaleX(.5); -ms-transform: scaleX(.5); -o-transform: scaleX(.5); transform: scaleX(.5)}
.MJXp-scale6 {-webkit-transform: scaleX(.6); -moz-transform: scaleX(.6); -ms-transform: scaleX(.6); -o-transform: scaleX(.6); transform: scaleX(.6)}
.MJXp-scale7 {-webkit-transform: scaleX(.7); -moz-transform: scaleX(.7); -ms-transform: scaleX(.7); -o-transform: scaleX(.7); transform: scaleX(.7)}
.MJXp-scale8 {-webkit-transform: scaleX(.8); -moz-transform: scaleX(.8); -ms-transform: scaleX(.8); -o-transform: scaleX(.8); transform: scaleX(.8)}
.MJXp-scale9 {-webkit-transform: scaleX(.9); -moz-transform: scaleX(.9); -ms-transform: scaleX(.9); -o-transform: scaleX(.9); transform: scaleX(.9)}
</style><style type="text/css">.mjx-chtml {display: inline-block; line-height: 0; text-indent: 0; text-align: left; text-transform: none; font-style: normal; font-weight: normal; font-size: 100%; font-size-adjust: none; letter-spacing: normal; word-wrap: normal; word-spacing: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; margin: 0; padding: 1px 0}
.MJXc-display {display: block; text-align: center; margin: 1em 0; padding: 0}
.mjx-chtml[tabindex]:focus, body :focus .mjx-chtml[tabindex] {display: inline-table}
.mjx-full-width {text-align: center; display: table-cell!important; width: 10000em}
.mjx-math {display: inline-block; border-collapse: separate; border-spacing: 0}
.mjx-math * {display: inline-block; -webkit-box-sizing: content-box!important; -moz-box-sizing: content-box!important; box-sizing: content-box!important; text-align: left}
.mjx-numerator {display: block; text-align: center}
.mjx-denominator {display: block; text-align: center}
.MJXc-stacked {height: 0; position: relative}
.MJXc-stacked > * {position: absolute}
.MJXc-bevelled > * {display: inline-block}
.mjx-stack {display: inline-block}
.mjx-op {display: block}
.mjx-under {display: table-cell}
.mjx-over {display: block}
.mjx-over > * {padding-left: 0px!important; padding-right: 0px!important}
.mjx-under > * {padding-left: 0px!important; padding-right: 0px!important}
.mjx-stack > .mjx-sup {display: block}
.mjx-stack > .mjx-sub {display: block}
.mjx-prestack > .mjx-presup {display: block}
.mjx-prestack > .mjx-presub {display: block}
.mjx-delim-h > .mjx-char {display: inline-block}
.mjx-surd {vertical-align: top}
.mjx-mphantom * {visibility: hidden}
.mjx-merror {background-color: #FFFF88; color: #CC0000; border: 1px solid #CC0000; padding: 2px 3px; font-style: normal; font-size: 90%}
.mjx-annotation-xml {line-height: normal}
.mjx-menclose > svg {fill: none; stroke: currentColor}
.mjx-mtr {display: table-row}
.mjx-mlabeledtr {display: table-row}
.mjx-mtd {display: table-cell; text-align: center}
.mjx-label {display: table-row}
.mjx-box {display: inline-block}
.mjx-block {display: block}
.mjx-span {display: inline}
.mjx-char {display: block; white-space: pre}
.mjx-itable {display: inline-table; width: auto}
.mjx-row {display: table-row}
.mjx-cell {display: table-cell}
.mjx-table {display: table; width: 100%}
.mjx-line {display: block; height: 0}
.mjx-strut {width: 0; padding-top: 1em}
.mjx-vsize {width: 0}
.MJXc-space1 {margin-left: .167em}
.MJXc-space2 {margin-left: .222em}
.MJXc-space3 {margin-left: .278em}
.mjx-chartest {display: block; visibility: hidden; position: absolute; top: 0; line-height: normal; font-size: 500%}
.mjx-chartest .mjx-char {display: inline}
.mjx-chartest .mjx-box {padding-top: 1000px}
.MJXc-processing {visibility: hidden; position: fixed; width: 0; height: 0; overflow: hidden}
.MJXc-processed {display: none}
.mjx-test {display: block; font-style: normal; font-weight: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-transform: none; letter-spacing: normal; word-spacing: normal; overflow: hidden; height: 1px}
.mjx-ex-box-test {position: absolute; width: 1px; height: 60ex}
.mjx-line-box-test {display: table!important}
.mjx-line-box-test span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
#MathJax\_CHTML\_Tooltip {background-color: InfoBackground; color: InfoText; border: 1px solid black; box-shadow: 2px 2px 5px #AAAAAA; -webkit-box-shadow: 2px 2px 5px #AAAAAA; -moz-box-shadow: 2px 2px 5px #AAAAAA; -khtml-box-shadow: 2px 2px 5px #AAAAAA; padding: 3px 4px; z-index: 401; position: absolute; left: 0; top: 0; width: auto; height: auto; display: none}
.MJXc-TeX-unknown-R {font-family: STIXGeneral,'Cambria Math','Arial Unicode MS',serif; font-style: normal; font-weight: normal}
.MJXc-TeX-unknown-I {font-family: STIXGeneral,'Cambria Math','Arial Unicode MS',serif; font-style: italic; font-weight: normal}
.MJXc-TeX-unknown-B {font-family: STIXGeneral,'Cambria Math','Arial Unicode MS',serif; font-style: normal; font-weight: bold}
.MJXc-TeX-unknown-BI {font-family: STIXGeneral,'Cambria Math','Arial Unicode MS',serif; font-style: italic; font-weight: bold}
.MJXc-TeX-ams-R {font-family: MJXc-TeX-ams-R,MJXc-TeX-ams-Rw}
.MJXc-TeX-cal-B {font-family: MJXc-TeX-cal-B,MJXc-TeX-cal-Bx,MJXc-TeX-cal-Bw}
.MJXc-TeX-frak-R {font-family: MJXc-TeX-frak-R,MJXc-TeX-frak-Rw}
.MJXc-TeX-frak-B {font-family: MJXc-TeX-frak-B,MJXc-TeX-frak-Bx,MJXc-TeX-frak-Bw}
.MJXc-TeX-math-BI {font-family: MJXc-TeX-math-BI,MJXc-TeX-math-BIx,MJXc-TeX-math-BIw}
.MJXc-TeX-sans-R {font-family: MJXc-TeX-sans-R,MJXc-TeX-sans-Rw}
.MJXc-TeX-sans-B {font-family: MJXc-TeX-sans-B,MJXc-TeX-sans-Bx,MJXc-TeX-sans-Bw}
.MJXc-TeX-sans-I {font-family: MJXc-TeX-sans-I,MJXc-TeX-sans-Ix,MJXc-TeX-sans-Iw}
.MJXc-TeX-script-R {font-family: MJXc-TeX-script-R,MJXc-TeX-script-Rw}
.MJXc-TeX-type-R {font-family: MJXc-TeX-type-R,MJXc-TeX-type-Rw}
.MJXc-TeX-cal-R {font-family: MJXc-TeX-cal-R,MJXc-TeX-cal-Rw}
.MJXc-TeX-main-B {font-family: MJXc-TeX-main-B,MJXc-TeX-main-Bx,MJXc-TeX-main-Bw}
.MJXc-TeX-main-I {font-family: MJXc-TeX-main-I,MJXc-TeX-main-Ix,MJXc-TeX-main-Iw}
.MJXc-TeX-main-R {font-family: MJXc-TeX-main-R,MJXc-TeX-main-Rw}
.MJXc-TeX-math-I {font-family: MJXc-TeX-math-I,MJXc-TeX-math-Ix,MJXc-TeX-math-Iw}
.MJXc-TeX-size1-R {font-family: MJXc-TeX-size1-R,MJXc-TeX-size1-Rw}
.MJXc-TeX-size2-R {font-family: MJXc-TeX-size2-R,MJXc-TeX-size2-Rw}
.MJXc-TeX-size3-R {font-family: MJXc-TeX-size3-R,MJXc-TeX-size3-Rw}
.MJXc-TeX-size4-R {font-family: MJXc-TeX-size4-R,MJXc-TeX-size4-Rw}
@font-face {font-family: MJXc-TeX-ams-R; src: local('MathJax\_AMS'), local('MathJax\_AMS-Regular')}
@font-face {font-family: MJXc-TeX-ams-Rw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_AMS-Regular.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_AMS-Regular.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_AMS-Regular.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-cal-B; src: local('MathJax\_Caligraphic Bold'), local('MathJax\_Caligraphic-Bold')}
@font-face {font-family: MJXc-TeX-cal-Bx; src: local('MathJax\_Caligraphic'); font-weight: bold}
@font-face {font-family: MJXc-TeX-cal-Bw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Caligraphic-Bold.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Caligraphic-Bold.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Caligraphic-Bold.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-frak-R; src: local('MathJax\_Fraktur'), local('MathJax\_Fraktur-Regular')}
@font-face {font-family: MJXc-TeX-frak-Rw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Fraktur-Regular.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Fraktur-Regular.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Fraktur-Regular.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-frak-B; src: local('MathJax\_Fraktur Bold'), local('MathJax\_Fraktur-Bold')}
@font-face {font-family: MJXc-TeX-frak-Bx; src: local('MathJax\_Fraktur'); font-weight: bold}
@font-face {font-family: MJXc-TeX-frak-Bw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Fraktur-Bold.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Fraktur-Bold.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Fraktur-Bold.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-math-BI; src: local('MathJax\_Math BoldItalic'), local('MathJax\_Math-BoldItalic')}
@font-face {font-family: MJXc-TeX-math-BIx; src: local('MathJax\_Math'); font-weight: bold; font-style: italic}
@font-face {font-family: MJXc-TeX-math-BIw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Math-BoldItalic.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Math-BoldItalic.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Math-BoldItalic.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-sans-R; src: local('MathJax\_SansSerif'), local('MathJax\_SansSerif-Regular')}
@font-face {font-family: MJXc-TeX-sans-Rw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_SansSerif-Regular.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_SansSerif-Regular.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_SansSerif-Regular.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-sans-B; src: local('MathJax\_SansSerif Bold'), local('MathJax\_SansSerif-Bold')}
@font-face {font-family: MJXc-TeX-sans-Bx; src: local('MathJax\_SansSerif'); font-weight: bold}
@font-face {font-family: MJXc-TeX-sans-Bw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_SansSerif-Bold.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_SansSerif-Bold.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_SansSerif-Bold.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-sans-I; src: local('MathJax\_SansSerif Italic'), local('MathJax\_SansSerif-Italic')}
@font-face {font-family: MJXc-TeX-sans-Ix; src: local('MathJax\_SansSerif'); font-style: italic}
@font-face {font-family: MJXc-TeX-sans-Iw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_SansSerif-Italic.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_SansSerif-Italic.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_SansSerif-Italic.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-script-R; src: local('MathJax\_Script'), local('MathJax\_Script-Regular')}
@font-face {font-family: MJXc-TeX-script-Rw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Script-Regular.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Script-Regular.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Script-Regular.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-type-R; src: local('MathJax\_Typewriter'), local('MathJax\_Typewriter-Regular')}
@font-face {font-family: MJXc-TeX-type-Rw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Typewriter-Regular.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Typewriter-Regular.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Typewriter-Regular.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-cal-R; src: local('MathJax\_Caligraphic'), local('MathJax\_Caligraphic-Regular')}
@font-face {font-family: MJXc-TeX-cal-Rw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Caligraphic-Regular.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Caligraphic-Regular.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Caligraphic-Regular.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-main-B; src: local('MathJax\_Main Bold'), local('MathJax\_Main-Bold')}
@font-face {font-family: MJXc-TeX-main-Bx; src: local('MathJax\_Main'); font-weight: bold}
@font-face {font-family: MJXc-TeX-main-Bw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Main-Bold.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Main-Bold.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Main-Bold.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-main-I; src: local('MathJax\_Main Italic'), local('MathJax\_Main-Italic')}
@font-face {font-family: MJXc-TeX-main-Ix; src: local('MathJax\_Main'); font-style: italic}
@font-face {font-family: MJXc-TeX-main-Iw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Main-Italic.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Main-Italic.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Main-Italic.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-main-R; src: local('MathJax\_Main'), local('MathJax\_Main-Regular')}
@font-face {font-family: MJXc-TeX-main-Rw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Main-Regular.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Main-Regular.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Main-Regular.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-math-I; src: local('MathJax\_Math Italic'), local('MathJax\_Math-Italic')}
@font-face {font-family: MJXc-TeX-math-Ix; src: local('MathJax\_Math'); font-style: italic}
@font-face {font-family: MJXc-TeX-math-Iw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Math-Italic.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Math-Italic.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Math-Italic.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-size1-R; src: local('MathJax\_Size1'), local('MathJax\_Size1-Regular')}
@font-face {font-family: MJXc-TeX-size1-Rw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Size1-Regular.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Size1-Regular.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Size1-Regular.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-size2-R; src: local('MathJax\_Size2'), local('MathJax\_Size2-Regular')}
@font-face {font-family: MJXc-TeX-size2-Rw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Size2-Regular.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Size2-Regular.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Size2-Regular.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-size3-R; src: local('MathJax\_Size3'), local('MathJax\_Size3-Regular')}
@font-face {font-family: MJXc-TeX-size3-Rw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Size3-Regular.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Size3-Regular.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Size3-Regular.otf') format('opentype')}
@font-face {font-family: MJXc-TeX-size4-R; src: local('MathJax\_Size4'), local('MathJax\_Size4-Regular')}
@font-face {font-family: MJXc-TeX-size4-Rw; src /*1*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/eot/MathJax\_Size4-Regular.eot'); src /*2*/: url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/woff/MathJax\_Size4-Regular.woff') format('woff'), url('https://yandex.st/contest/mathjax/fonts/HTML-CSS/TeX/otf/MathJax\_Size4-Regular.otf') format('opentype')}
</style>


   <div class="header">
      <h1 class="title" id="Qualification-A">A. Клетчатая доска</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>1&nbsp;секунда</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>256Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или input.txt</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или output.txt</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend">
      <!--l. 48-->
      <p style="text-indent: 0em;"><span style="font-weight: bold;">Решение, корректно работающее в</span> <span style="font-weight: bold;">ограничениях</span><span style="font-weight: bold;">&nbsp;</span><!--l. 48--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-1" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-4" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-5" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">k</span></span><span id="MJXc-Node-6" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-7" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>k</mi> <mo>≤</mo> <mn>3</mn></math></script><span style="font-weight: bold;">,</span> <span style="font-weight: bold;">будет оценено в 3 балла.</span><!--l. 50-->
      </p><p style="text-indent: 0em;"><span style="font-weight: bold;">Полное решение будет оценено в 6 баллов (включая 3 балла
      за</span> <span style="font-weight: bold;">подзадачу выше).</span><!--l. 53-->
      </p><p style="text-indent: 0em;">Вася записался на кружок 
деревообработки. Уже завтра ему нужно принести первое собственное
      изделие&nbsp;— шахматную доску. Но «папа у Васи силен в 
математике», поэтому посоветовал сформулировать задание шире&nbsp;—
      сделать доску размера <!--l. 53--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-8" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-9" class="mjx-mrow"><span id="MJXc-Node-10" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span><span id="MJXc-Node-11" class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.193em; padding-bottom: 0.319em;">×</span></span><span id="MJXc-Node-12" class="mjx-mi MJXc-space2"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi>
      <mo>×</mo> <mi>n</mi></math></script> и раскрасить клетки в <!--l. 53--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-13" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-14" class="mjx-mrow"><span id="MJXc-Node-15" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">k</span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></script>
      цветов. <!--l. 55-->
      </p><p style="text-indent: 0em;">Определите, можно ли раскрасить клетки доски <!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-16" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-17" class="mjx-mrow"><span id="MJXc-Node-18" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span><span id="MJXc-Node-19" class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.193em; padding-bottom: 0.319em;">×</span></span><span id="MJXc-Node-20" class="mjx-mi MJXc-space2"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi> <mo>×</mo> <mi>n</mi></math></script> в <!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-21" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-22" class="mjx-mrow"><span id="MJXc-Node-23" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">k</span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></script> цветов так, чтобы </p><ul>
      <li>Количество клеток каждого цвета было равно <!--l. 57--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-24" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-25" class="mjx-mrow"><span id="MJXc-Node-26" class="mjx-mfrac"><span class="mjx-box MJXc-stacked" style="width: 0.844em; padding: 0px 0.12em;"><span class="mjx-numerator" style="font-size: 70.7%; width: 1.193em; top: -1.513em;"><span id="MJXc-Node-27" class="mjx-mrow" style=""><span id="MJXc-Node-28" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-29" class="mjx-mrow"><span id="MJXc-Node-30" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span><span class="mjx-sup" style="font-size: 71.5%; vertical-align: 0.507em; padding-left: 0px; padding-right: 0.07em;"><span id="MJXc-Node-31" class="mjx-mrow" style=""><span id="MJXc-Node-32" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">2</span></span></span></span></span></span></span><span class="mjx-denominator" style="font-size: 70.7%; width: 1.193em; bottom: -0.667em;"><span id="MJXc-Node-33" class="mjx-mrow" style=""><span id="MJXc-Node-34" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">k</span></span></span></span><span style="border-bottom: 1.3px solid; top: -0.29em; width: 0.844em;" class="mjx-line"></span></span><span style="height: 1.541em; vertical-align: -0.472em;" class="mjx-vsize"></span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mfrac><mrow><msup><mrow><mi>n</mi></mrow><mrow><mn>2</mn></mrow></msup></mrow>
      <mrow><mi>k</mi></mrow></mfrac> </math></script>. </li>
      <li>Никакие две соседние по сторонам клетки не были окрашены в один цвет.</li>
      </ul>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification">
      <!--l. 64-->
      <p style="text-indent: 0em;">В единственной строке записаны два целых числа <!--l. 64--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-35" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-36" class="mjx-mrow"><span id="MJXc-Node-37" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span></span><script type="math/mml" id="MathJax-Element-7"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></script> и <!--l. 64--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-8-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-38" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-39" class="mjx-mrow"><span id="MJXc-Node-40" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">k</span></span></span></span></span><script type="math/mml" id="MathJax-Element-8"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></script> (<!--l. 64--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-9-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-41" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-42" class="mjx-mrow"><span id="MJXc-Node-43" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-44" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-45" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span><span id="MJXc-Node-46" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-47" class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">k</span></span><span id="MJXc-Node-48" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-49" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-50" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span></span><script type="math/mml" id="MathJax-Element-9"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>n</mi><mo>,</mo><mi>k</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn></math></script>).
      </p>
      
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification">
      <!--l. 70-->
      <p style="text-indent: 0em;">Если раскраску доски, которую предложил папа Васи, получить невозможно, то выведите в единственной
      строке значение <span style="font-family: monospace;">No</span>, иначе в первой строке выведите значение <span style="font-family: monospace;">Yes</span>, а в следующих <!--l. 70--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-10-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-51" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-52" class="mjx-mrow"><span id="MJXc-Node-53" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span></span><script type="math/mml" id="MathJax-Element-10"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></script>
      строках выведите по <!--l. 70--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-11-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-54" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-55" class="mjx-mrow"><span id="MJXc-Node-56" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span></span><script type="math/mml" id="MathJax-Element-11"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></script>
      целых чисел <!--l. 70--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-12-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-57" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-58" class="mjx-mrow"><span id="MJXc-Node-59" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-60" class="mjx-mrow"><span id="MJXc-Node-61" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">c</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-62" class="mjx-mrow" style=""><span id="MJXc-Node-63" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span><span id="MJXc-Node-64" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.509em;">j</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-12"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>c</mi></mrow><mrow><mi>i</mi><mi>j</mi></mrow></msub></math></script>.
      <!--l. 70--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-13-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-65" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-66" class="mjx-mrow"><span id="MJXc-Node-67" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-68" class="mjx-mrow"><span id="MJXc-Node-69" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">c</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-70" class="mjx-mrow" style=""><span id="MJXc-Node-71" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span><span id="MJXc-Node-72" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.509em;">j</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-13"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>c</mi></mrow><mrow><mi>i</mi><mi>j</mi></mrow></msub></math></script>
      (<!--l. 70--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-14-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-73" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-74" class="mjx-mrow"><span id="MJXc-Node-75" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-76" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-77" class="mjx-msub MJXc-space3"><span class="mjx-base"><span id="MJXc-Node-78" class="mjx-mrow"><span id="MJXc-Node-79" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">c</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-80" class="mjx-mrow" style=""><span id="MJXc-Node-81" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span><span id="MJXc-Node-82" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.509em;">j</span></span></span></span></span><span id="MJXc-Node-83" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-84" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">k</span></span></span></span></span><script type="math/mml" id="MathJax-Element-14"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
      <msub><mrow><mi>c</mi></mrow><mrow><mi>i</mi><mi>j</mi></mrow></msub> <mo>≤</mo> <mi>k</mi></math></script>)&nbsp;— цвет, в который
      Васе следует раскрасить клетку в <!--l. 70--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-15-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-85" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-86" class="mjx-mrow"><span id="MJXc-Node-87" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span><script type="math/mml" id="MathJax-Element-15"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math></script>-м
      ряду и <!--l. 70--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-16-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-88" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-89" class="mjx-mrow"><span id="MJXc-Node-90" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.509em;">j</span></span></span></span></span><script type="math/mml" id="MathJax-Element-16"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>j</mi></math></script>-м
      столбце. <!--l. 72-->
      </p><p style="text-indent: 0em;">Если подходящих раскрасок несколько, выведите любую из них. </p>
      <p></p>
      
   </div>
   <h3>Пример 1</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>8 2
</pre></td>
            <td><pre>Yes
1 2 1 2 1 2 1 2
2 1 2 1 2 1 2 1
1 2 1 2 1 2 1 2
2 1 2 1 2 1 2 1
1 2 1 2 1 2 1 2
2 1 2 1 2 1 2 1
1 2 1 2 1 2 1 2
2 1 2 1 2 1 2 1
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 2</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>2 1
</pre></td>
            <td><pre>No
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 3</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>3 3
</pre></td>
            <td><pre>Yes
1 2 1
2 3 2
3 1 3
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 4</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>1 3
</pre></td>
            <td><pre>No
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 5</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>5 3
</pre></td>
            <td><pre>No
</pre></td>
         </tr>
      </tbody>
   </table>


<hr>

   <div class="header">
      <h1 class="title" id="Qualification-B">B. Необычное деление</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>2&nbsp;секунды</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>256Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или input.txt</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или output.txt</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend">
      <!--l. 48-->
      <p style="text-indent: 0em;"><span style="font-weight: bold;">Решение, корректно работающее в</span> <span style="font-weight: bold;">ограничениях</span><span style="font-weight: bold;">&nbsp;</span><!--l. 48--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-1" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-4" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-5" class="mjx-msub MJXc-space3"><span class="mjx-base"><span id="MJXc-Node-6" class="mjx-mrow"><span id="MJXc-Node-7" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-8" class="mjx-mrow" style=""><span id="MJXc-Node-9" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span><span id="MJXc-Node-10" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-11" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-12" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-13" class="mjx-mrow"><span id="MJXc-Node-14" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-15" class="mjx-mrow" style=""><span id="MJXc-Node-16" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">5</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <msub><mrow><mi>n</mi></mrow><mrow><mi>i</mi></mrow></msub>
      <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>5</mn></mrow></msup></math></script><span style="font-weight: bold;">,</span>
      <span style="font-weight: bold;">будет оценено в 4 балла.</span><!--l. 50-->
      </p><p style="text-indent: 0em;"><span style="font-weight: bold;">Полное решение будет оценено в 7 баллов (включая 4 балла
      за</span> <span style="font-weight: bold;">подзадачу выше).</span><!--l. 53-->
      </p><p style="text-indent: 0em;">Второклассник Вася учится делить числа. Пока ему объяснили только деление на числа от 1 до
      9. <!--l. 55-->
      </p><p style="text-indent: 0em;">Вася слушал учительницу невнимательно, поэтому делит число <!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-17" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-18" class="mjx-mrow"><span id="MJXc-Node-19" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">a</span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></script> на число <!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-20" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-21" class="mjx-mrow"><span id="MJXc-Node-22" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">b</span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math></script> следующим образом: проходит по всем
      цифрам в числе <!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-23" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-24" class="mjx-mrow"><span id="MJXc-Node-25" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">a</span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></script>,
      каждую цифру делит на <!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-26" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-27" class="mjx-mrow"><span id="MJXc-Node-28" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">b</span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math></script>,
      частное записывает к итоговому числу, а остаток отбрасывает. <!--l. 57-->
      </p><p style="text-indent: 0em;">К примеру, в Васином делении <!--l. 57--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-29" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-30" class="mjx-mrow"><span id="MJXc-Node-31" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-32" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">6</span></span><span id="MJXc-Node-33" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.13em; padding-bottom: 0.319em;">:</span></span><span id="MJXc-Node-34" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-35" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-36" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-37" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">2</span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>3</mn><mn>6</mn> <mo>:</mo> <mn>3</mn> <mo>=</mo> <mn>1</mn><mn>2</mn></math></script>,
      поскольку <!--l. 57--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-38" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-39" class="mjx-mrow"><span id="MJXc-Node-40" class="mjx-mfrac"><span class="mjx-box MJXc-stacked" style="width: 0.495em; padding: 0px 0.12em;"><span class="mjx-numerator" style="font-size: 70.7%; width: 0.7em; top: -1.356em;"><span id="MJXc-Node-41" class="mjx-mrow" style=""><span id="MJXc-Node-42" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span></span></span><span class="mjx-denominator" style="font-size: 70.7%; width: 0.7em; bottom: -0.649em;"><span id="MJXc-Node-43" class="mjx-mrow" style=""><span id="MJXc-Node-44" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span></span></span><span style="border-bottom: 1.3px solid; top: -0.29em; width: 0.495em;" class="mjx-line"></span></span><span style="height: 1.418em; vertical-align: -0.459em;" class="mjx-vsize"></span></span><span id="MJXc-Node-45" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-46" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span></span></span></span><script type="math/mml" id="MathJax-Element-7"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mfrac><mrow><mn>3</mn></mrow>
      <mrow><mn>3</mn></mrow></mfrac> <mo>=</mo> <mn>1</mn></math></script>, <!--l. 57--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-8-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-47" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-48" class="mjx-mrow"><span id="MJXc-Node-49" class="mjx-mfrac"><span class="mjx-box MJXc-stacked" style="width: 0.495em; padding: 0px 0.12em;"><span class="mjx-numerator" style="font-size: 70.7%; width: 0.7em; top: -1.357em;"><span id="MJXc-Node-50" class="mjx-mrow" style=""><span id="MJXc-Node-51" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">6</span></span></span></span><span class="mjx-denominator" style="font-size: 70.7%; width: 0.7em; bottom: -0.649em;"><span id="MJXc-Node-52" class="mjx-mrow" style=""><span id="MJXc-Node-53" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span></span></span><span style="border-bottom: 1.3px solid; top: -0.29em; width: 0.495em;" class="mjx-line"></span></span><span style="height: 1.419em; vertical-align: -0.459em;" class="mjx-vsize"></span></span><span id="MJXc-Node-54" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-55" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">2</span></span></span></span></span><script type="math/mml" id="MathJax-Element-8"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mfrac><mrow><mn>6</mn></mrow> <mrow><mn>3</mn></mrow></mfrac> <mo>=</mo> <mn>2</mn></math></script>.
      Но <!--l. 57--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-9-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-56" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-57" class="mjx-mrow"><span id="MJXc-Node-58" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">2</span></span><span id="MJXc-Node-59" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">6</span></span><span id="MJXc-Node-60" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.13em; padding-bottom: 0.319em;">:</span></span><span id="MJXc-Node-61" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-62" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-63" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-64" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">2</span></span><span id="MJXc-Node-65" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-66" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">2</span></span></span></span></span><script type="math/mml" id="MathJax-Element-9"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn><mn>6</mn>
      <mo>:</mo> <mn>3</mn> <mo>=</mo> <mn>0</mn><mn>2</mn> <mo>=</mo> <mn>2</mn></math></script>, поскольку <!--l. 57--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-10-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-67" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-68" class="mjx-mrow"><span id="MJXc-Node-69" class="mjx-mfenced"><span id="MJXc-Node-70" class="mjx-mo"><span class="mjx-char MJXc-TeX-size2-R" style="padding-top: 0.951em; padding-bottom: 0.951em;">⌊</span></span><span id="MJXc-Node-71" class="mjx-mrow"><span id="MJXc-Node-72" class="mjx-mfrac"><span class="mjx-box MJXc-stacked" style="width: 0.495em; padding: 0px 0.12em;"><span class="mjx-numerator" style="font-size: 70.7%; width: 0.7em; top: -1.335em;"><span id="MJXc-Node-73" class="mjx-mrow" style=""><span id="MJXc-Node-74" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">2</span></span></span></span><span class="mjx-denominator" style="font-size: 70.7%; width: 0.7em; bottom: -0.649em;"><span id="MJXc-Node-75" class="mjx-mrow" style=""><span id="MJXc-Node-76" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span></span></span><span style="border-bottom: 1.3px solid; top: -0.29em; width: 0.495em;" class="mjx-line"></span></span><span style="height: 1.403em; vertical-align: -0.459em;" class="mjx-vsize"></span></span></span><span id="MJXc-Node-77" class="mjx-mo"><span class="mjx-char MJXc-TeX-size2-R" style="padding-top: 0.951em; padding-bottom: 0.951em;">⌋</span></span></span><span id="MJXc-Node-78" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-79" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span></span><script type="math/mml" id="MathJax-Element-10"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"> <mfenced close="⌋" open="⌊" separators=""><mrow><mfrac><mrow><mn>2</mn></mrow>
      <mrow><mn>3</mn></mrow></mfrac></mrow></mfenced> <mo>=</mo> <mn>0</mn></math></script>. <!--l. 59-->
      </p><p style="text-indent: 0em;">Чтобы закрепить навык деления, учительница дала ему <!--l. 59--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-11-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-80" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-81" class="mjx-mrow"><span id="MJXc-Node-82" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.382em; padding-bottom: 0.319em;">t</span></span></span></span></span><script type="math/mml" id="MathJax-Element-11"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>t</mi></math></script> домашних работ. В <!--l. 59--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-12-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-83" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-84" class="mjx-mrow"><span id="MJXc-Node-85" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span><script type="math/mml" id="MathJax-Element-12"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math></script>-й домашней работе нужно было посчитать <!--l. 59--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-13-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-86" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-87" class="mjx-mrow"><span id="MJXc-Node-88" class="mjx-mfrac"><span class="mjx-box MJXc-stacked" style="width: 0.645em; padding: 0px 0.12em;"><span class="mjx-numerator" style="font-size: 70.7%; width: 0.911em; top: -1.335em;"><span id="MJXc-Node-89" class="mjx-mrow" style=""><span id="MJXc-Node-90" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span></span></span><span class="mjx-denominator" style="font-size: 70.7%; width: 0.911em; bottom: -0.807em;"><span id="MJXc-Node-91" class="mjx-mrow" style=""><span id="MJXc-Node-92" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-93" class="mjx-mrow"><span id="MJXc-Node-94" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">b</span></span></span></span><span class="mjx-sub" style="font-size: 71.5%; vertical-align: -0.21em; padding-right: 0.07em;"><span id="MJXc-Node-95" class="mjx-mrow" style=""><span id="MJXc-Node-96" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span><span style="border-bottom: 1.3px solid; top: -0.29em; width: 0.645em;" class="mjx-line"></span></span><span style="height: 1.515em; vertical-align: -0.571em;" class="mjx-vsize"></span></span></span></span></span><script type="math/mml" id="MathJax-Element-13"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"> <mfrac><mrow><mn>1</mn></mrow> <mrow><msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub></mrow></mfrac></math></script>,
      <!--l. 59--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-14-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-97" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-98" class="mjx-mrow"><span id="MJXc-Node-99" class="mjx-mfrac"><span class="mjx-box MJXc-stacked" style="width: 0.645em; padding: 0px 0.12em;"><span class="mjx-numerator" style="font-size: 70.7%; width: 0.911em; top: -1.335em;"><span id="MJXc-Node-100" class="mjx-mrow" style=""><span id="MJXc-Node-101" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">2</span></span></span></span><span class="mjx-denominator" style="font-size: 70.7%; width: 0.911em; bottom: -0.807em;"><span id="MJXc-Node-102" class="mjx-mrow" style=""><span id="MJXc-Node-103" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-104" class="mjx-mrow"><span id="MJXc-Node-105" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">b</span></span></span></span><span class="mjx-sub" style="font-size: 71.5%; vertical-align: -0.21em; padding-right: 0.07em;"><span id="MJXc-Node-106" class="mjx-mrow" style=""><span id="MJXc-Node-107" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span><span style="border-bottom: 1.3px solid; top: -0.29em; width: 0.645em;" class="mjx-line"></span></span><span style="height: 1.515em; vertical-align: -0.571em;" class="mjx-vsize"></span></span></span></span></span><script type="math/mml" id="MathJax-Element-14"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"> <mfrac><mrow><mn>2</mn></mrow>
      <mrow><msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub></mrow></mfrac></math></script>, …, <!--l. 59--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-15-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-108" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-109" class="mjx-mrow"><span id="MJXc-Node-110" class="mjx-mfrac"><span class="mjx-box MJXc-stacked" style="width: 0.765em; padding: 0px 0.12em;"><span class="mjx-numerator" style="font-size: 70.7%; width: 1.082em; top: -1.262em;"><span id="MJXc-Node-111" class="mjx-mrow" style=""><span id="MJXc-Node-112" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-113" class="mjx-mrow"><span id="MJXc-Node-114" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span><span class="mjx-sub" style="font-size: 71.5%; vertical-align: -0.21em; padding-right: 0.07em;"><span id="MJXc-Node-115" class="mjx-mrow" style=""><span id="MJXc-Node-116" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span><span class="mjx-denominator" style="font-size: 70.7%; width: 1.082em; bottom: -0.807em;"><span id="MJXc-Node-117" class="mjx-mrow" style=""><span id="MJXc-Node-118" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-119" class="mjx-mrow"><span id="MJXc-Node-120" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">b</span></span></span></span><span class="mjx-sub" style="font-size: 71.5%; vertical-align: -0.21em; padding-right: 0.07em;"><span id="MJXc-Node-121" class="mjx-mrow" style=""><span id="MJXc-Node-122" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span><span style="border-bottom: 1.3px solid; top: -0.29em; width: 0.765em;" class="mjx-line"></span></span><span style="height: 1.463em; vertical-align: -0.571em;" class="mjx-vsize"></span></span></span></span></span><script type="math/mml" id="MathJax-Element-15"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mfrac><mrow><msub><mrow><mi>n</mi></mrow><mrow><mi>i</mi></mrow></msub></mrow>
      <mrow><msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub></mrow></mfrac> </math></script>. <!--l. 61-->
      </p><p style="text-indent: 0em;">Каждую домашнюю работу учительница оценивает исходя из количества правильно решенных примеров.
      Пример считается верным тогда и только тогда, когда результат Васиного деления <!--l. 61--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-16-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-123" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-124" class="mjx-mrow"><span id="MJXc-Node-125" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">a</span></span></span></span></span><script type="math/mml" id="MathJax-Element-16"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></script> на <!--l. 61--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-17-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-126" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-127" class="mjx-mrow"><span id="MJXc-Node-128" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">b</span></span></span></span></span><script type="math/mml" id="MathJax-Element-17"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math></script> совпадает с результатом настоящего деления <!--l. 61--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-18-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-129" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-130" class="mjx-mrow"><span id="MJXc-Node-131" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">a</span></span></span></span></span><script type="math/mml" id="MathJax-Element-18"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></script> на <!--l. 61--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-19-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-132" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-133" class="mjx-mrow"><span id="MJXc-Node-134" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">b</span></span></span></span></span><script type="math/mml" id="MathJax-Element-19"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math></script> без округлений. Помогите
      учительнице посчитать, сколько примеров Вася решил верно. </p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification">
      <!--l. 65-->
      <p style="text-indent: 0em;">Первая строка содержит одно целое положительное число <!--l. 65--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-20-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-135" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-136" class="mjx-mrow"><span id="MJXc-Node-137" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.382em; padding-bottom: 0.319em;">t</span></span></span></span></span><script type="math/mml" id="MathJax-Element-20"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>t</mi></math></script><!--l. 65--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-21-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-138" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-139" class="mjx-mrow"><span id="MJXc-Node-140" class="mjx-mrow"><span id="MJXc-Node-141" class="mjx-mo"><span class="mjx-char MJXc-TeX-size1-R" style="padding-top: 0.635em; padding-bottom: 0.635em;">(</span></span><span id="MJXc-Node-142" class="mjx-mrow"><span id="MJXc-Node-143" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-144" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-145" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.382em; padding-bottom: 0.319em;">t</span></span><span id="MJXc-Node-146" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-147" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-148" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-149" class="mjx-mrow"><span id="MJXc-Node-150" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-151" class="mjx-mrow" style=""><span id="MJXc-Node-152" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">5</span></span></span></span></span></span><span id="MJXc-Node-153" class="mjx-mo"><span class="mjx-char MJXc-TeX-size1-R" style="padding-top: 0.635em; padding-bottom: 0.635em;">)</span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-21"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>(</mo><mrow><mn>1</mn> <mo>≤</mo> <mi>t</mi> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>5</mn></mrow></msup></mrow><mo>)</mo></mrow></math></script>&nbsp;—
      количество домашних работ. <!--l. 67-->
      </p><p style="text-indent: 0em;">Следующие <!--l. 67--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-22-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-154" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-155" class="mjx-mrow"><span id="MJXc-Node-156" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.382em; padding-bottom: 0.319em;">t</span></span></span></span></span><script type="math/mml" id="MathJax-Element-22"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>t</mi></math></script>
      строк содержат по два целых положительных числа <!--l. 67--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-23-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-157" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-158" class="mjx-mrow"><span id="MJXc-Node-159" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-160" class="mjx-mrow"><span id="MJXc-Node-161" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-162" class="mjx-mrow" style=""><span id="MJXc-Node-163" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-23"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>n</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script><!--l.
      67--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-24-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-164" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-165" class="mjx-mrow"><span id="MJXc-Node-166" class="mjx-mrow"><span id="MJXc-Node-167" class="mjx-mo"><span class="mjx-char MJXc-TeX-size1-R" style="padding-top: 0.635em; padding-bottom: 0.635em;">(</span></span><span id="MJXc-Node-168" class="mjx-mrow"><span id="MJXc-Node-169" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-170" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-171" class="mjx-msub MJXc-space3"><span class="mjx-base"><span id="MJXc-Node-172" class="mjx-mrow"><span id="MJXc-Node-173" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-174" class="mjx-mrow" style=""><span id="MJXc-Node-175" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span><span id="MJXc-Node-176" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-177" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-178" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-179" class="mjx-mrow"><span id="MJXc-Node-180" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-181" class="mjx-mrow" style=""><span id="MJXc-Node-182" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-183" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">8</span></span></span></span></span></span><span id="MJXc-Node-184" class="mjx-mo"><span class="mjx-char MJXc-TeX-size1-R" style="padding-top: 0.635em; padding-bottom: 0.635em;">)</span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-24"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>(</mo><mrow><mn>1</mn>
      <mo>≤</mo> <msub><mrow><mi>n</mi></mrow><mrow><mi>i</mi></mrow></msub> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>1</mn><mn>8</mn></mrow></msup></mrow><mo>)</mo></mrow></math></script>
      и <!--l. 67--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-25-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-185" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-186" class="mjx-mrow"><span id="MJXc-Node-187" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-188" class="mjx-mrow"><span id="MJXc-Node-189" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">b</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-190" class="mjx-mrow" style=""><span id="MJXc-Node-191" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-25"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script><!--l.
      67--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-26-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-192" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-193" class="mjx-mrow"><span id="MJXc-Node-194" class="mjx-mrow"><span id="MJXc-Node-195" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">(</span></span><span id="MJXc-Node-196" class="mjx-mrow"><span id="MJXc-Node-197" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-198" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-199" class="mjx-msub MJXc-space3"><span class="mjx-base"><span id="MJXc-Node-200" class="mjx-mrow"><span id="MJXc-Node-201" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">b</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-202" class="mjx-mrow" style=""><span id="MJXc-Node-203" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span><span id="MJXc-Node-204" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-205" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">9</span></span></span><span id="MJXc-Node-206" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">)</span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-26"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>(</mo><mrow><mn>1</mn>
      <mo>≤</mo> <msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub> <mo>≤</mo> <mn>9</mn></mrow><mo>)</mo></mrow></math></script>&nbsp;—
      количество примеров и делитель во всех примерах соответственно. </p>
      <p></p>
      
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification">
      <!--l. 71-->
      <p style="text-indent: 0em;">Нужно вывести <!--l. 71--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-27-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-207" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-208" class="mjx-mrow"><span id="MJXc-Node-209" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.382em; padding-bottom: 0.319em;">t</span></span></span></span></span><script type="math/mml" id="MathJax-Element-27"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>t</mi></math></script>
      строк&nbsp;— количество правильно решенных примеров в каждой домашней работе. </p>
      
   </div>
   <h2>Пример</h2>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>4
10 1
36 3
11 2
1000000000000000000 7
</pre></td>
            <td><pre>10
6
4
262143
</pre></td>
         </tr>
      </tbody>
   </table>
   <h2>Примечания</h2>
   <div class="notes">
      <!--l. 75-->
      <p style="text-indent: 0em;">В примере даны четыре домашние работы: </p><ul>
      <li>В первой работе все примеры будут решены верно. </li>
      <li>Во второй работе будут правильно решены примеры с <!--l. 79--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-28-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-210" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-211" class="mjx-mrow"><span id="MJXc-Node-212" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">a</span></span><span id="MJXc-Node-213" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-214" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-215" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-216" class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">6</span></span><span id="MJXc-Node-217" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-218" class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">9</span></span><span id="MJXc-Node-219" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-220" class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-221" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-222" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-223" class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-224" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-225" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-226" class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-227" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">6</span></span></span></span></span><script type="math/mml" id="MathJax-Element-28"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi>
      <mo>=</mo> <mn>3</mn><mo>,</mo><mn>6</mn><mo>,</mo><mn>9</mn><mo>,</mo><mn>3</mn><mn>0</mn><mo>,</mo><mn>3</mn><mn>3</mn><mo>,</mo><mn>3</mn><mn>6</mn></math></script>.
      </li>
      <li>Во третьей работе будут правильно решены примеры с <!--l. 80--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-29-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-228" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-229" class="mjx-mrow"><span id="MJXc-Node-230" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">a</span></span><span id="MJXc-Node-231" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-232" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">2</span></span><span id="MJXc-Node-233" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-234" class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">4</span></span><span id="MJXc-Node-235" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-236" class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">6</span></span><span id="MJXc-Node-237" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-238" class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">8</span></span></span></span></span><script type="math/mml" id="MathJax-Element-29"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi>
      <mo>=</mo> <mn>2</mn><mo>,</mo><mn>4</mn><mo>,</mo><mn>6</mn><mo>,</mo><mn>8</mn></math></script>.</li>
      </ul>
      <!--l. 83-->
      <p style="text-indent: 0em;">Заметим: пример с <!--l. 83--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-30-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-239" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-240" class="mjx-mrow"><span id="MJXc-Node-241" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">a</span></span><span id="MJXc-Node-242" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-243" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">4</span></span></span></span></span><script type="math/mml" id="MathJax-Element-30"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi>
      <mo>=</mo> <mn>4</mn></math></script>, <!--l. 83--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-31-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-244" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-245" class="mjx-mrow"><span id="MJXc-Node-246" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">b</span></span><span id="MJXc-Node-247" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-248" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span></span></span></span><script type="math/mml" id="MathJax-Element-31"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi>
      <mo>=</mo> <mn>3</mn></math></script> будет решен неверно, поскольку <!--l. 83--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-32-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-249" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-250" class="mjx-mrow"><span id="MJXc-Node-251" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">4</span></span><span id="MJXc-Node-252" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.13em; padding-bottom: 0.319em;">:</span></span><span id="MJXc-Node-253" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-254" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-255" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-256" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">≠</span></span><span id="MJXc-Node-257" class="mjx-mfrac MJXc-space3"><span class="mjx-box MJXc-stacked" style="width: 0.495em; padding: 0px 0.12em;"><span class="mjx-numerator" style="font-size: 70.7%; width: 0.7em; top: -1.346em;"><span id="MJXc-Node-258" class="mjx-mrow" style=""><span id="MJXc-Node-259" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">4</span></span></span></span><span class="mjx-denominator" style="font-size: 70.7%; width: 0.7em; bottom: -0.649em;"><span id="MJXc-Node-260" class="mjx-mrow" style=""><span id="MJXc-Node-261" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span></span></span><span style="border-bottom: 1.3px solid; top: -0.29em; width: 0.495em;" class="mjx-line"></span></span><span style="height: 1.411em; vertical-align: -0.459em;" class="mjx-vsize"></span></span><span id="MJXc-Node-262" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-263" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-264" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.319em;">.</span></span><span id="MJXc-Node-265" class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-266" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-267" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-268" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-269" class="mjx-mo MJXc-space1"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.319em;">…</span></span></span></span></span><script type="math/mml" id="MathJax-Element-32"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>4</mn>
      <mo>:</mo> <mn>3</mn> <mo>=</mo> <mn>1</mn><mo>≠</mo><mfrac><mrow><mn>4</mn></mrow> <mrow><mn>3</mn></mrow></mfrac> <mo>=</mo>
      <mn>1</mn><mo>.</mo><mn>3</mn><mn>3</mn><mn>3</mn><mn>3</mn><mo>…</mo></math></script></p>
      <p></p>
      
   </div>


<hr>


   <div class="header">
      <h1 class="title" id="Qualification-C">C. Почти квадратные числа</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>2&nbsp;секунды</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>256Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или input.txt</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или output.txt</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend">
      <!--l. 48-->
      <p style="text-indent: 0em;"><span style="font-weight: bold;">Полное решение будет оценено в 7 баллов.</span><!--l. 50-->
      </p><p style="text-indent: 0em;">Вася хотел нарисовать на листке 
бумаги квадрат, но немного ошибся&nbsp;— у него получился
      прямоугольник, стороны которого различались на 1. «Но это же почти
 квадрат!»&nbsp;— подумал Вася и решил показать его папе.
      <!--l. 52-->
      </p><p style="text-indent: 0em;">Папа Васи посмотрел на прямоугольник, вспомнил теорему о разложении любого натурального числа
      в 4 полных квадрата и задумался о разложении числа 2022 на сумму почти квадратных чисел. <!--l. 54-->
      </p><p style="text-indent: 0em;">Числа вида <!--l. 54--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-1" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">k</span></span><span id="MJXc-Node-4" class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.003em; padding-bottom: 0.319em;">⋅</span></span><span id="MJXc-Node-5" class="mjx-mrow MJXc-space2"><span id="MJXc-Node-6" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">(</span></span><span id="MJXc-Node-7" class="mjx-mrow"><span id="MJXc-Node-8" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">k</span></span><span id="MJXc-Node-9" class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.446em;">+</span></span><span id="MJXc-Node-10" class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span></span><span id="MJXc-Node-11" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">)</span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi>
      <mo>⋅</mo> <mrow><mo>(</mo><mrow><mi>k</mi> <mo>+</mo> <mn>1</mn></mrow><mo>)</mo></mrow></math></script>, <!--l. 54--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-12" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-13" class="mjx-mrow"><span id="MJXc-Node-14" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">k</span></span><span id="MJXc-Node-15" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.256em; padding-bottom: 0.382em;">∈</span></span><span id="MJXc-Node-16" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-ams-R" style="padding-top: 0.446em; padding-bottom: 0.319em;">N</span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi> <mo>∈</mo> <mi>ℕ</mi></math></script>, будем называть
      <span style="font-style: italic;">почти квадратными</span>. На сумму какого минимального числа почти квадратных чисел можно
      разбить данное <span style="font-weight: bold;">четное </span>натуральное число <!--l. 54--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-17" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-18" class="mjx-mrow"><span id="MJXc-Node-19" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></script>? </p>
      <p></p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification">
      <!--l. 58-->
      <p style="text-indent: 0em;">В единственной строке задано целое четное число <!--l. 58--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-20" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-21" class="mjx-mrow"><span id="MJXc-Node-22" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></script> (<!--l. 58--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-23" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-24" class="mjx-mrow"><span id="MJXc-Node-25" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">2</span></span><span id="MJXc-Node-26" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-27" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span><span id="MJXc-Node-28" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-29" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-30" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-31" class="mjx-mrow"><span id="MJXc-Node-32" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-33" class="mjx-mrow" style=""><span id="MJXc-Node-34" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-35" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">2</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn> <mo>≤</mo> <mi>n</mi> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>1</mn><mn>2</mn></mrow></msup></math></script>).
      </p>
      
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification">
      <!--l. 63-->
      <p style="text-indent: 0em;">Выведите одно натуральное число&nbsp;— минимальное <!--l. 63--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-36" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-37" class="mjx-mrow"><span id="MJXc-Node-38" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">m</span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math></script>&nbsp;— такое, что <!--l. 63--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-39" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-40" class="mjx-mrow"><span id="MJXc-Node-41" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span></span><script type="math/mml" id="MathJax-Element-7"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></script> разложимо на сумму <!--l. 63--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-8-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-42" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-43" class="mjx-mrow"><span id="MJXc-Node-44" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">m</span></span></span></span></span><script type="math/mml" id="MathJax-Element-8"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math></script> почти квадратных. </p>
      
   </div>
   <h3>Пример 1</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>98
</pre></td>
            <td><pre>2
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 2</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>10
</pre></td>
            <td><pre>3
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 3</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>2022
</pre></td>
            <td><pre>2
</pre></td>
         </tr>
      </tbody>
   </table>


<hr>


   <div class="header">
      <h1 class="title" id="Qualification-D">D. Макс и синтез аминокислот</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>5&nbsp;секунд</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>256Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или input.txt</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или output.txt</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend">
      <!--l. 48-->
      <p style="text-indent: 0em;"><span style="font-weight: bold;">Решение, корректно работающее в</span> <span style="font-weight: bold;">ограничениях</span><span style="font-weight: bold;">&nbsp;</span><!--l. 48--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-1" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-4" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-5" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em; padding-right: 0.085em;">N</span></span><span id="MJXc-Node-6" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-7" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-8" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>N</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn></math></script><span style="font-weight: bold;">,</span><!--l. 48--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-9" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-10" class="mjx-mrow"><span id="MJXc-Node-11" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-12" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-13" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em;">L</span></span><span id="MJXc-Node-14" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-15" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">2</span></span><span id="MJXc-Node-16" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn>
      <mo>≤</mo> <mi>L</mi> <mo>≤</mo> <mn>2</mn><mn>0</mn></math></script><span style="font-weight: bold;">,</span> <span style="font-weight: bold;">будет оценено в 5 баллов.</span><!--l. 50-->
      </p><p style="text-indent: 0em;"><span style="font-weight: bold;">Полное решение будет оценено в 10 баллов (включая 5 баллов
      за</span> <span style="font-weight: bold;">подзадачу выше).</span><!--l. 53-->
      </p><p style="text-indent: 0em;">Макс разрабатывает новую вакцину, которая позволит защитить людей сразу от нескольких опасных
      болезней. Для этого Максу нужно синтезировать <!--l. 53--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-17" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-18" class="mjx-mrow"><span id="MJXc-Node-19" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em; padding-right: 0.085em;">N</span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></script>
      различных определенных аминокислот. <!--l. 55-->
      </p><p style="text-indent: 0em;">Аминокислоты состоят из оснований: аденина (<!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-20" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-21" class="mjx-mrow"><span id="MJXc-Node-22" class="mjx-mstyle"><span id="MJXc-Node-23" class="mjx-mrow"><span id="MJXc-Node-24" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">A</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">A</mtext></mstyle></math></script>),
      цитозина (<!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-25" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-26" class="mjx-mrow"><span id="MJXc-Node-27" class="mjx-mstyle"><span id="MJXc-Node-28" class="mjx-mrow"><span id="MJXc-Node-29" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">C</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">C</mtext></mstyle></math></script>), гуанина (<!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-30" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-31" class="mjx-mrow"><span id="MJXc-Node-32" class="mjx-mstyle"><span id="MJXc-Node-33" class="mjx-mrow"><span id="MJXc-Node-34" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">G</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">G</mtext></mstyle></math></script>) и тимина (<!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-35" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-36" class="mjx-mrow"><span id="MJXc-Node-37" class="mjx-mstyle"><span id="MJXc-Node-38" class="mjx-mrow"><span id="MJXc-Node-39" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.382em; padding-bottom: 0.256em;">T</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-7"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">T</mtext></mstyle></math></script>); каждая из интересующих Макса аминокислот
      состоит из <!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-8-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-40" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-41" class="mjx-mrow"><span id="MJXc-Node-42" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em;">L</span></span></span></span></span><script type="math/mml" id="MathJax-Element-8"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi></math></script>
      оснований. Другими словами, аминокислоты — это строки длины <!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-9-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-43" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-44" class="mjx-mrow"><span id="MJXc-Node-45" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em;">L</span></span></span></span></span><script type="math/mml" id="MathJax-Element-9"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi></math></script>,
      состоящие из символов <!--l. 55--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-10-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-46" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-47" class="mjx-mrow"><span id="MJXc-Node-48" class="mjx-mfenced"><span id="MJXc-Node-49" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">{</span></span><span id="MJXc-Node-50" class="mjx-mrow"><span id="MJXc-Node-51" class="mjx-mstyle"><span id="MJXc-Node-52" class="mjx-mrow"><span id="MJXc-Node-53" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">A</span></span></span></span><span id="MJXc-Node-54" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-55" class="mjx-mstyle MJXc-space1"><span id="MJXc-Node-56" class="mjx-mrow"><span id="MJXc-Node-57" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">C</span></span></span></span><span id="MJXc-Node-58" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-59" class="mjx-mstyle MJXc-space1"><span id="MJXc-Node-60" class="mjx-mrow"><span id="MJXc-Node-61" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">G</span></span></span></span><span id="MJXc-Node-62" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-63" class="mjx-mstyle MJXc-space1"><span id="MJXc-Node-64" class="mjx-mrow"><span id="MJXc-Node-65" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.382em; padding-bottom: 0.256em;">T</span></span></span></span></span><span id="MJXc-Node-66" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">}</span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-10"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML">
      <mfenced close="}" open="{" separators=""><mrow><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">A</mtext></mstyle><mo>,</mo><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">C</mtext></mstyle><mo>,</mo><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">G</mtext></mstyle><mo>,</mo><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">T</mtext></mstyle></mrow></mfenced></math></script>.
      <!--l. 57-->
      </p><p style="text-indent: 0em;">Синтез аминокислоты происходит следующим образом. Макс должен взять за основу одну из уже
      имеющихся аминокислот. Далее за одно действие Макс может заменить <span style="font-weight: bold;">один </span>любой символ
      в аминокислоте на следующий или предыдущий в циклической последовательности <!--l. 57--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-11-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-67" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-68" class="mjx-mrow"><span id="MJXc-Node-69" class="mjx-mfenced"><span id="MJXc-Node-70" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">{</span></span><span id="MJXc-Node-71" class="mjx-mrow"><span id="MJXc-Node-72" class="mjx-mstyle"><span id="MJXc-Node-73" class="mjx-mrow"><span id="MJXc-Node-74" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">A</span></span></span></span><span id="MJXc-Node-75" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-76" class="mjx-mstyle MJXc-space1"><span id="MJXc-Node-77" class="mjx-mrow"><span id="MJXc-Node-78" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">C</span></span></span></span><span id="MJXc-Node-79" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-80" class="mjx-mstyle MJXc-space1"><span id="MJXc-Node-81" class="mjx-mrow"><span id="MJXc-Node-82" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">G</span></span></span></span><span id="MJXc-Node-83" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-84" class="mjx-mstyle MJXc-space1"><span id="MJXc-Node-85" class="mjx-mrow"><span id="MJXc-Node-86" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.382em; padding-bottom: 0.256em;">T</span></span></span></span></span><span id="MJXc-Node-87" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">}</span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-11"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"> <mfenced close="}" open="{" separators=""><mrow><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">A</mtext></mstyle><mo>,</mo><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">C</mtext></mstyle><mo>,</mo><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">G</mtext></mstyle><mo>,</mo><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">T</mtext></mstyle></mrow></mfenced></math></script> (например, за один ход можно заменить одно вхождение
      <!--l. 57--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-12-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-88" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-89" class="mjx-mrow"><span id="MJXc-Node-90" class="mjx-mstyle"><span id="MJXc-Node-91" class="mjx-mrow"><span id="MJXc-Node-92" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">A</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-12"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">A</mtext></mstyle></math></script> на <!--l. 57--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-13-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-93" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-94" class="mjx-mrow"><span id="MJXc-Node-95" class="mjx-mstyle"><span id="MJXc-Node-96" class="mjx-mrow"><span id="MJXc-Node-97" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">C</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-13"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">C</mtext></mstyle></math></script>
      или на <!--l. 57--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-14-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-98" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-99" class="mjx-mrow"><span id="MJXc-Node-100" class="mjx-mstyle"><span id="MJXc-Node-101" class="mjx-mrow"><span id="MJXc-Node-102" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.382em; padding-bottom: 0.256em;">T</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-14"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">T</mtext></mstyle></math></script>). <!--l. 59-->
      </p><p style="text-indent: 0em;">Изначально у Макса есть только одна аминокислота, состоящая из <!--l. 59--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-15-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-103" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-104" class="mjx-mrow"><span id="MJXc-Node-105" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em;">L</span></span></span></span></span><script type="math/mml" id="MathJax-Element-15"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi></math></script> символов <!--l. 59--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-16-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-106" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-107" class="mjx-mrow"><span id="MJXc-Node-108" class="mjx-mstyle"><span id="MJXc-Node-109" class="mjx-mrow"><span id="MJXc-Node-110" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">A</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-16"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">A</mtext></mstyle></math></script>. Как только Макс получает одну из <!--l. 60--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-17-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-111" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-112" class="mjx-mrow"><span id="MJXc-Node-113" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em; padding-right: 0.085em;">N</span></span></span></span></span><script type="math/mml" id="MathJax-Element-17"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></script> нужных аминокислот, он добавляет ее к имеющимся и далее
      может сколько угодно раз использовать ее в качестве исходной для синтеза новых аминокислот. <!--l. 62-->
      </p><p style="text-indent: 0em;">Помогите Максу определить, как оптимальнее всего синтезировать аминокислоты, и найдите минимальное
      количество действий для получения всех нужных аминокислот. </p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification">
      <!--l. 66-->
      <p style="text-indent: 0em;">Первая строка содержит целые числа <!--l. 66--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-18-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-114" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-115" class="mjx-mrow"><span id="MJXc-Node-116" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em; padding-right: 0.085em;">N</span></span></span></span></span><script type="math/mml" id="MathJax-Element-18"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></script> и <!--l. 66--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-19-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-117" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-118" class="mjx-mrow"><span id="MJXc-Node-119" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em;">L</span></span></span></span></span><script type="math/mml" id="MathJax-Element-19"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi></math></script> (<!--l. 66--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-20-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-120" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-121" class="mjx-mrow"><span id="MJXc-Node-122" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-123" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-124" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em; padding-right: 0.085em;">N</span></span><span id="MJXc-Node-125" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-126" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">5</span></span><span id="MJXc-Node-127" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-128" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span></span><script type="math/mml" id="MathJax-Element-20"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>N</mi> <mo>≤</mo> <mn>5</mn><mn>0</mn><mn>0</mn></math></script>,
      <!--l. 66--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-21-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-129" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-130" class="mjx-mrow"><span id="MJXc-Node-131" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-132" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-133" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em;">L</span></span><span id="MJXc-Node-134" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-135" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">5</span></span><span id="MJXc-Node-136" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-137" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span></span><script type="math/mml" id="MathJax-Element-21"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
      <mi>L</mi> <mo>≤</mo> <mn>5</mn><mn>0</mn><mn>0</mn></math></script>)&nbsp;— количество аминокислот и количество оснований в аминокислотах
      соответственно. <!--l. 68-->
      </p><p style="text-indent: 0em;">Следующие <!--l. 68--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-22-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-138" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-139" class="mjx-mrow"><span id="MJXc-Node-140" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em; padding-right: 0.085em;">N</span></span></span></span></span><script type="math/mml" id="MathJax-Element-22"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></script>
      строк описывают аминокислоты. Каждая из них содержит последовательность <!--l. 68--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-23-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-141" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-142" class="mjx-mrow"><span id="MJXc-Node-143" class="mjx-msub"><span class="mjx-base" style="margin-right: -0.032em;"><span id="MJXc-Node-144" class="mjx-mrow"><span id="MJXc-Node-145" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.509em; padding-bottom: 0.319em; padding-right: 0.032em;">S</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-146" class="mjx-mrow" style=""><span id="MJXc-Node-147" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-23"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>S</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script>, состоящую
      из <!--l. 68--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-24-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-148" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-149" class="mjx-mrow"><span id="MJXc-Node-150" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em;">L</span></span></span></span></span><script type="math/mml" id="MathJax-Element-24"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi></math></script>
      символов <!--l. 68--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-25-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-151" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-152" class="mjx-mrow"><span id="MJXc-Node-153" class="mjx-mfenced"><span id="MJXc-Node-154" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">{</span></span><span id="MJXc-Node-155" class="mjx-mrow"><span id="MJXc-Node-156" class="mjx-mstyle"><span id="MJXc-Node-157" class="mjx-mrow"><span id="MJXc-Node-158" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">A</span></span></span></span><span id="MJXc-Node-159" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-160" class="mjx-mstyle MJXc-space1"><span id="MJXc-Node-161" class="mjx-mrow"><span id="MJXc-Node-162" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">C</span></span></span></span><span id="MJXc-Node-163" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-164" class="mjx-mstyle MJXc-space1"><span id="MJXc-Node-165" class="mjx-mrow"><span id="MJXc-Node-166" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">G</span></span></span></span><span id="MJXc-Node-167" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-168" class="mjx-mstyle MJXc-space1"><span id="MJXc-Node-169" class="mjx-mrow"><span id="MJXc-Node-170" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.382em; padding-bottom: 0.256em;">T</span></span></span></span></span><span id="MJXc-Node-171" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">}</span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-25"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"> <mfenced close="}" open="{" separators=""><mrow><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">A</mtext></mstyle><mo>,</mo><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">C</mtext></mstyle><mo>,</mo><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">G</mtext></mstyle><mo>,</mo><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">T</mtext></mstyle></mrow></mfenced></math></script>.
      <!--l. 70-->
      </p><p style="text-indent: 0em;">Все аминокислоты различны. </p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification">
      <!--l. 74-->
      <p style="text-indent: 0em;">Выведите одно целое число&nbsp;— минимальное количество действий, за которое Макс сможет получить
      все перечисленные аминокислоты, начав с аминокислоты, состоящей из <!--l. 74--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-26-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-172" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-173" class="mjx-mrow"><span id="MJXc-Node-174" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em;">L</span></span></span></span></span><script type="math/mml" id="MathJax-Element-26"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi></math></script> оснований <!--l. 74--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-27-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-175" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-176" class="mjx-mrow"><span id="MJXc-Node-177" class="mjx-mstyle"><span id="MJXc-Node-178" class="mjx-mrow"><span id="MJXc-Node-179" class="mjx-mtext" style=""><span class="mjx-char MJXc-TeX-type-R" style="padding-top: 0.446em; padding-bottom: 0.256em;">A</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-27"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mstyle><mtext style="font-family: monospace;" mathvariant="monospace">A</mtext></mstyle></math></script>.
      </p>
      
   </div>
   <h3>Пример 1</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>3 5
GCAGT
ACAGA
GCAGA
</pre></td>
            <td><pre>6
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 2</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>8 12
CGGCCGCAACTC
GGATGTTTGCTG
TTGAAACGTACG
GCTGCGGGGGTC
AGGTACTCACAA
ACATATTTCTGG
GGAGTGGAGGTC
AACACGTAGCCC
</pre></td>
            <td><pre>72
</pre></td>
         </tr>
      </tbody>
   </table>


<hr>


   <div class="header">
      <h1 class="title" id="Qualification-E">E. Камень, ножницы, бумага</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>2&nbsp;секунды</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>256Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или input.txt</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или output.txt</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend">
      <!--l. 48-->
      <p style="text-indent: 0em;"><span style="font-weight: bold;">Полное решение будет оценено в 10 баллов.</span><!--l. 50-->
      </p><p style="text-indent: 0em;">На факультатив по математике к Васиному папе ходит <!--l. 50--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-1" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></script>
 человек. На занятии по теории игр ребята должны были сыграть
      много партий в игру «Камень, ножницы, бумага». Играли они, правда,
 нестандартным образом: каждый из ребят выбрал элемент (камень,
      ножницы или бумагу) и во всех играх показывал именно этот символ. <!--l. 52-->
      </p><p style="text-indent: 0em;">Петр, старший брат Васи, решил узнать, какой элемент выбрал каждый игрок. Для этого он <!--l.
      52--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-4" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-5" class="mjx-mrow"><span id="MJXc-Node-6" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.446em; padding-right: 0.014em;">q</span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>q</mi></math></script> раз подходил
      к одному из ребят (обозначим <!--l. 52--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-7" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-8" class="mjx-mrow"><span id="MJXc-Node-9" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math></script>-го
      из них числом <!--l. 52--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-10" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-11" class="mjx-mrow"><span id="MJXc-Node-12" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-13" class="mjx-mrow"><span id="MJXc-Node-14" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">u</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-15" class="mjx-mrow" style=""><span id="MJXc-Node-16" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>u</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script>)
      и спрашивал: «Когда вы сыграли с человеком <!--l. 52--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-17" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-18" class="mjx-mrow"><span id="MJXc-Node-19" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-20" class="mjx-mrow"><span id="MJXc-Node-21" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">v</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-22" class="mjx-mrow" style=""><span id="MJXc-Node-23" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>v</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script>,
      кто из вас победил?». На это он получал один из трех ответов: победа игрока <!--l. 52--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-24" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-25" class="mjx-mrow"><span id="MJXc-Node-26" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-27" class="mjx-mrow"><span id="MJXc-Node-28" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">u</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-29" class="mjx-mrow" style=""><span id="MJXc-Node-30" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>u</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script>, ничья,
      поражение (победа игрока <!--l. 52--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-31" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-32" class="mjx-mrow"><span id="MJXc-Node-33" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-34" class="mjx-mrow"><span id="MJXc-Node-35" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">v</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-36" class="mjx-mrow" style=""><span id="MJXc-Node-37" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-7"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>v</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script>).
      Затем Петр записывал ответ игрока <!--l. 52--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-8-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-38" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-39" class="mjx-mrow"><span id="MJXc-Node-40" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-41" class="mjx-mrow"><span id="MJXc-Node-42" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">u</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-43" class="mjx-mrow" style=""><span id="MJXc-Node-44" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-8"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>u</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script>
      в блокнот. <!--l. 54-->
      </p><p style="text-indent: 0em;">Анализируя свои записи, Петр 
заинтересовался возможными наборами выбранных ребятами символов.
      Для каждой записи в блокнот Петр захотел определить, сколько 
существует корректных ответов на вопрос: «Какой элемент выбрал
      каждый человек?». Ответ является корректным, если все записи до 
текущей включительно не противоречат ему. Два ответа являются
      различными тогда и только тогда, когда существует человек, который
 в этих двух ответах выбрал разные элементы. <!--l. 56-->
      </p><p style="text-indent: 0em;">Основываясь на данных из 
блокнота, помогите Петру посчитать необходимое количество ответов
      после каждого вопроса. Возможно такое, что данные в блокноте 
записаны неверно, из-за чего количество корректных ответов равно
      нулю. Ответы могут быть очень большими, поэтому выведите их по 
модулю <!--l. 56--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-9-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-45" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-46" class="mjx-mrow"><span id="MJXc-Node-47" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-48" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-49" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-50" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-51" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-52" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-53" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-54" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-55" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-56" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">7</span></span></span></span></span><script type="math/mml" id="MathJax-Element-9"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mn>0</mn><mn>0</mn><mn>0</mn><mn>0</mn><mn>0</mn><mn>0</mn><mn>0</mn><mn>0</mn><mn>7</mn></math></script><!--l.
      56--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-10-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-57" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-58" class="mjx-mrow"><span id="MJXc-Node-59" class="mjx-mrow"><span id="MJXc-Node-60" class="mjx-mo"><span class="mjx-char MJXc-TeX-size1-R" style="padding-top: 0.635em; padding-bottom: 0.635em;">(</span></span><span id="MJXc-Node-61" class="mjx-mrow"><span id="MJXc-Node-62" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-63" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-64" class="mjx-mrow"><span id="MJXc-Node-65" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-66" class="mjx-mrow" style=""><span id="MJXc-Node-67" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">9</span></span></span></span></span><span id="MJXc-Node-68" class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.446em;">+</span></span><span id="MJXc-Node-69" class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">7</span></span></span><span id="MJXc-Node-70" class="mjx-mo"><span class="mjx-char MJXc-TeX-size1-R" style="padding-top: 0.635em; padding-bottom: 0.635em;">)</span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-10"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>(</mo><mrow><mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>9</mn></mrow></msup>
      <mo>+</mo> <mn>7</mn></mrow><mo>)</mo></mrow></math></script>. <!--l. 58-->
      </p><p style="text-indent: 0em;">Игрок, который выбрал камень, побеждает игрока, который выбрал ножницы, проигрывает игроку,
      который выбрал бумагу, и играет вничью с игроком, который выбрал камень. <!--l. 60-->
      </p><p style="text-indent: 0em;">Игрок, который выбрал ножницы, побеждает игрока, который выбрал бумагу, проигрывает игроку,
      который выбрал камень, и играет вничью с игроком, который выбрал ножницы. <!--l. 62-->
      </p><p style="text-indent: 0em;">Игрок, который выбрал бумагу, побеждает игрока, который выбрал камень, проигрывает игроку,
      который выбрал ножницы, и играет вничью с игроком, который выбрал бумагу. </p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification">
      <!--l. 67-->
      <p style="text-indent: 0em;">Первая строка содержит два целых положительных числа <!--l. 67--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-11-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-71" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-72" class="mjx-mrow"><span id="MJXc-Node-73" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span></span><script type="math/mml" id="MathJax-Element-11"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></script> и <!--l. 67--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-12-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-74" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-75" class="mjx-mrow"><span id="MJXc-Node-76" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.446em; padding-right: 0.014em;">q</span></span></span></span></span><script type="math/mml" id="MathJax-Element-12"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>q</mi></math></script><!--l. 67--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-13-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-77" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-78" class="mjx-mrow"><span id="MJXc-Node-79" class="mjx-mrow"><span id="MJXc-Node-80" class="mjx-mo"><span class="mjx-char MJXc-TeX-size1-R" style="padding-top: 0.635em; padding-bottom: 0.635em;">(</span></span><span id="MJXc-Node-81" class="mjx-mrow"><span id="MJXc-Node-82" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-83" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-84" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span><span id="MJXc-Node-85" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-86" class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.446em; padding-right: 0.014em;">q</span></span><span id="MJXc-Node-87" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-88" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-89" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-90" class="mjx-mrow"><span id="MJXc-Node-91" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-92" class="mjx-mrow" style=""><span id="MJXc-Node-93" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">5</span></span></span></span></span></span><span id="MJXc-Node-94" class="mjx-mo"><span class="mjx-char MJXc-TeX-size1-R" style="padding-top: 0.635em; padding-bottom: 0.635em;">)</span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-13"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>(</mo><mrow><mn>1</mn> <mo>≤</mo> <mi>n</mi><mo>,</mo><mi>q</mi> <mo>≤</mo>
      <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>5</mn></mrow></msup></mrow><mo>)</mo></mrow></math></script>. <!--l. 69-->
      </p><p style="text-indent: 0em;">Далее следуют <!--l. 69--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-14-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-95" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-96" class="mjx-mrow"><span id="MJXc-Node-97" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.446em; padding-right: 0.014em;">q</span></span></span></span></span><script type="math/mml" id="MathJax-Element-14"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>q</mi></math></script>
      строк, каждая из которых содержит два целых неотрицательных числа <!--l. 69--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-15-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-98" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-99" class="mjx-mrow"><span id="MJXc-Node-100" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">u</span></span></span></span></span><script type="math/mml" id="MathJax-Element-15"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>u</mi></math></script>, <!--l. 69--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-16-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-101" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-102" class="mjx-mrow"><span id="MJXc-Node-103" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">v</span></span></span></span></span><script type="math/mml" id="MathJax-Element-16"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>v</mi></math></script> и символ <!--l. 69--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-17-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-104" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-105" class="mjx-mrow"><span id="MJXc-Node-106" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">r</span></span></span></span></span><script type="math/mml" id="MathJax-Element-17"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>r</mi></math></script><!--l. 69--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-18-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-107" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-108" class="mjx-mrow"><span id="MJXc-Node-109" class="mjx-mspace" style="width: 1em; height: 0px;"></span><span id="MJXc-Node-110" class="mjx-mrow"><span id="MJXc-Node-111" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">(</span></span><span id="MJXc-Node-112" class="mjx-mrow"><span id="MJXc-Node-113" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-114" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-115" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">u</span></span><span id="MJXc-Node-116" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-117" class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">v</span></span><span id="MJXc-Node-118" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-119" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span><span id="MJXc-Node-120" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-121" class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">r</span></span><span id="MJXc-Node-122" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.256em; padding-bottom: 0.382em;">∈</span></span><span id="MJXc-Node-123" class="mjx-mrow MJXc-space3"><span id="MJXc-Node-124" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">{</span></span><span id="MJXc-Node-125" class="mjx-mrow"><span id="MJXc-Node-126" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em; padding-right: 0.104em;">W</span></span><span id="MJXc-Node-127" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-128" class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em;">L</span></span><span id="MJXc-Node-129" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-130" class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em;">D</span></span></span><span id="MJXc-Node-131" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">}</span></span></span></span><span id="MJXc-Node-132" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">)</span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-18"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mspace width="1em"><mrow><mo>(</mo><mrow><mn>1</mn> <mo>≤</mo> <mi>u</mi><mo>,</mo><mi>v</mi>
      <mo>≤</mo> <mi>n</mi><mo>,</mo><mi>r</mi> <mo>∈</mo><mrow><mo>{</mo><mrow><mi>W</mi><mo>,</mo><mi>L</mi><mo>,</mo><mi>D</mi></mrow><mo>}</mo></mrow></mrow><mo>)</mo></mrow></mspace></math></script>.
      Если <!--l. 69--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-19-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-133" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-134" class="mjx-mrow"><span id="MJXc-Node-135" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">r</span></span><span id="MJXc-Node-136" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-137" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em; padding-right: 0.104em;">W</span></span></span></span></span><script type="math/mml" id="MathJax-Element-19"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>r</mi> <mo>=</mo>
      <mi>W</mi></math></script>, то <!--l. 69--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-20-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-138" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-139" class="mjx-mrow"><span id="MJXc-Node-140" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">u</span></span></span></span></span><script type="math/mml" id="MathJax-Element-20"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>u</mi></math></script>
      побеждает <!--l. 69--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-21-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-141" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-142" class="mjx-mrow"><span id="MJXc-Node-143" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">v</span></span></span></span></span><script type="math/mml" id="MathJax-Element-21"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>v</mi></math></script>,
      если <!--l. 69--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-22-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-144" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-145" class="mjx-mrow"><span id="MJXc-Node-146" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">r</span></span><span id="MJXc-Node-147" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-148" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em;">L</span></span></span></span></span><script type="math/mml" id="MathJax-Element-22"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>r</mi> <mo>=</mo>
      <mi>L</mi></math></script>, то <!--l. 69--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-23-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-149" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-150" class="mjx-mrow"><span id="MJXc-Node-151" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">v</span></span></span></span></span><script type="math/mml" id="MathJax-Element-23"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>v</mi></math></script>
      побеждает <!--l. 69--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-24-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-152" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-153" class="mjx-mrow"><span id="MJXc-Node-154" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">u</span></span></span></span></span><script type="math/mml" id="MathJax-Element-24"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>u</mi></math></script>,
      если <!--l. 69--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-25-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-155" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-156" class="mjx-mrow"><span id="MJXc-Node-157" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">r</span></span><span id="MJXc-Node-158" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.066em; padding-bottom: 0.319em;">=</span></span><span id="MJXc-Node-159" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.256em;">D</span></span></span></span></span><script type="math/mml" id="MathJax-Element-25"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>r</mi> <mo>=</mo>
      <mi>D</mi></math></script>, то они сыграют вничью. </p>
      <p></p>
      
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification">
      <!--l. 74-->
      <p style="text-indent: 0em;">Выведите <!--l. 74--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-26-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-160" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-161" class="mjx-mrow"><span id="MJXc-Node-162" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.446em; padding-right: 0.014em;">q</span></span></span></span></span><script type="math/mml" id="MathJax-Element-26"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>q</mi></math></script>
      строк, каждая из которых содержит одно целое неотрицательное число&nbsp;— ответ на вопрос о количестве корректных ответов
      по модулю <!--l. 74--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-27-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-163" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-164" class="mjx-mrow"><span id="MJXc-Node-165" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-166" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-167" class="mjx-mrow"><span id="MJXc-Node-168" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-169" class="mjx-mrow" style=""><span id="MJXc-Node-170" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">9</span></span></span></span></span><span id="MJXc-Node-171" class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.446em;">+</span></span><span id="MJXc-Node-172" class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">7</span></span></span></span></span><script type="math/mml" id="MathJax-Element-27"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>9</mn></mrow></msup>
      <mo>+</mo> <mn>7</mn></math></script>. </p>
      
   </div>
   <h3>Пример 1</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>3 3
1 2 D
1 3 W
3 2 L
</pre></td>
            <td><pre>9
3
3
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 2</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>2 2
1 2 W
2 1 W
</pre></td>
            <td><pre>3
0
</pre></td>
         </tr>
      </tbody>
   </table>


<hr>


   <div class="header">
      <h1 class="title" id="Qualification-F">F. Лифт</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>6&nbsp;секунд</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>512Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или input.txt</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или output.txt</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend">
      <!--l. 48-->
      <p style="text-indent: 0em;"><span style="font-weight: bold;">Полное решение будет оценено в 10 баллов.</span><!--l. 50-->
      </p><p style="text-indent: 0em;">Компания <span style="font-family: monospace;">ElevatorCorp</span>,
 в которой работает папа
      Васи, когда не ведет факультатив по математике, решила улучшить 
качество своих лифтов. Аналитическому отделу поручили выяснить,
      сколько времени проводит в движении лифт. В протоколе логирования 
все события вызова лифта имеют формат: <span style="font-family: monospace;">timestamp start\_floor destination\_floor</span>, где <span style="font-family: monospace;">timestamp</span>&nbsp;—
      количество секунд от начала рассчитываемого периода, <span style="font-family: monospace;">start\_floor</span> <span style="font-family: monospace;">destination\_floor</span>&nbsp;— этаж вызова лифта и этаж, на который едет пассажир. <!--l. 52-->
      </p><p style="text-indent: 0em;">Правила работы лифта аналитик Анна нашла в документации: </p><ul>
      <li>в начальный момент времени (0) лифт стоит на первом этаже; </li>
      <li>если пассажир вызывает лифт, когда тот свободен, то лифт сразу же начинает двигаться к тому, кто его вызвал; </li>
      <li>если лифт едет с пассажиром и проезжает мимо другого 
пассажира, направление которого совпадает с направлением движения
      лифта, лифт остановится и заберет этого пассажира, после чего 
продолжит движение. Когда все люди выйдут на своих этажах, обработка
      событий продолжится в порядке поступления событий. Если событий в 
очереди нет, то лифт остается на этаже; </li>
      <li>если на этаже из лифта вышли все пассажиры, но здесь же ожидают другие пассажиры в направлении текущего движения, то они
      заходят в лифт, и он продолжает движение с сохранением направления; </li>
      <li>все люди соблюдают правила пользования лифтом, и если лифт едет вверх, а им необходимо вниз, они не зайдут в него; </li>
      <li>лифт может вместить любое количество людей; </li>
      <li>пассажиры входят и выходят мгновенно.</li>
      </ul>
      <!--l. 63-->
      <p style="text-indent: 0em;">Добавим отдельно, пока пустой лифт 
едет к пассажиру, он не останавливается на промежуточных этажах.
      Если в какой-то момент времени одновременно происходит вызов на 
этаже, возле которого лифт стоит либо проезжает, то сначала
      обрабатывается действие человека, а затем в этот же момент&nbsp;— 
текущее множество вызовов. Таким образом, в этот момент
      времени лифт может сразу открыться, если стоял на этаже, мгновенно
 остановиться и открыть двери, если направления движения
      лифта и пассажира совпадают, проехать мимо, если лифт движется 
пустым или направления движения пассажира и лифта не совпадают.
      <!--l. 65-->
      </p><p style="text-indent: 0em;">Для проведения экспериментов с 
новыми версиями программного обеспечения нужно реализовать
      алгоритм быстрой симуляции обработки большого числа вызовов лифта.
 Для каждого пассажира необходимо определить, через какое
      количество секунд после вызова он зайдет в лифт. </p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification">
      <!--l. 71-->
      <p style="text-indent: 0em;">В первой строке содержатся числа <!--l. 71--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-1" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></script> и <!--l. 71--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-4" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-5" class="mjx-mrow"><span id="MJXc-Node-6" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.382em; padding-bottom: 0.319em;">t</span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>t</mi></math></script> (<!--l. 71--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-7" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-8" class="mjx-mrow"><span id="MJXc-Node-9" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-10" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-11" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span><span id="MJXc-Node-12" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-13" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">3</span></span><span id="MJXc-Node-14" class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.003em; padding-bottom: 0.319em;">⋅</span></span><span id="MJXc-Node-15" class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-16" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-17" class="mjx-mrow"><span id="MJXc-Node-18" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-19" class="mjx-mrow" style=""><span id="MJXc-Node-20" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">5</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>n</mi> <mo>≤</mo> <mn>3</mn> <mo>⋅</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>5</mn></mrow></msup></math></script>,
      <!--l. 71--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-21" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-22" class="mjx-mrow"><span id="MJXc-Node-23" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-24" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-25" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.382em; padding-bottom: 0.319em;">t</span></span><span id="MJXc-Node-26" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-27" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-28" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-29" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span><span id="MJXc-Node-30" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
      <mi>t</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn><mn>0</mn><mn>0</mn></math></script>)&nbsp;— количество пассажиров и время в секундах, за
      которое лифт перемещается между этажами. <!--l. 73-->
      </p><p style="text-indent: 0em;">Далее следует описание вызовов лифта. В <!--l. 73--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-31" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-32" class="mjx-mrow"><span id="MJXc-Node-33" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math></script>-й из следующих <!--l. 73--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-34" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-35" class="mjx-mrow"><span id="MJXc-Node-36" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">n</span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></script> строк содержится по 3 числа <!--l. 73--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-37" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-38" class="mjx-mrow"><span id="MJXc-Node-39" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-40" class="mjx-mrow"><span id="MJXc-Node-41" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.382em; padding-bottom: 0.319em;">t</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-42" class="mjx-mrow" style=""><span id="MJXc-Node-43" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-7"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script>,
      <!--l. 73--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-8-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-44" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-45" class="mjx-mrow"><span id="MJXc-Node-46" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-47" class="mjx-mrow"><span id="MJXc-Node-48" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">s</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-49" class="mjx-mrow" style=""><span id="MJXc-Node-50" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-8"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>s</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script>,
      <!--l. 73--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-9-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-51" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-52" class="mjx-mrow"><span id="MJXc-Node-53" class="mjx-msub"><span class="mjx-base" style="margin-right: -0.003em;"><span id="MJXc-Node-54" class="mjx-mrow"><span id="MJXc-Node-55" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em; padding-right: 0.003em;">d</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-56" class="mjx-mrow" style=""><span id="MJXc-Node-57" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-9"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>d</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script>
      (<!--l. 73--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-10-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-58" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-59" class="mjx-mrow"><span id="MJXc-Node-60" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-61" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-62" class="mjx-msub MJXc-space3"><span class="mjx-base"><span id="MJXc-Node-63" class="mjx-mrow"><span id="MJXc-Node-64" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.382em; padding-bottom: 0.319em;">t</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-65" class="mjx-mrow" style=""><span id="MJXc-Node-66" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span><span id="MJXc-Node-67" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-68" class="mjx-msub MJXc-space1"><span class="mjx-base"><span id="MJXc-Node-69" class="mjx-mrow"><span id="MJXc-Node-70" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">s</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-71" class="mjx-mrow" style=""><span id="MJXc-Node-72" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span><span id="MJXc-Node-73" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.186em; padding-bottom: 0.509em;">,</span></span><span id="MJXc-Node-74" class="mjx-msub MJXc-space1"><span class="mjx-base" style="margin-right: -0.003em;"><span id="MJXc-Node-75" class="mjx-mrow"><span id="MJXc-Node-76" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em; padding-right: 0.003em;">d</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-77" class="mjx-mrow" style=""><span id="MJXc-Node-78" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span><span id="MJXc-Node-79" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.319em; padding-bottom: 0.509em;">≤</span></span><span id="MJXc-Node-80" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.319em;">1</span></span><span id="MJXc-Node-81" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-82" class="mjx-mrow"><span id="MJXc-Node-83" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">0</span></span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-84" class="mjx-mrow" style=""><span id="MJXc-Node-85" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.382em; padding-bottom: 0.382em;">9</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-10"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
      <msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi></mrow></msub><mo>,</mo><msub><mrow><mi>s</mi></mrow><mrow><mi>i</mi></mrow></msub><mo>,</mo><msub><mrow><mi>d</mi></mrow><mrow><mi>i</mi></mrow></msub>
      <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>9</mn></mrow></msup></math></script>, <!--l. 73--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-11-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-86" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-87" class="mjx-mrow"><span id="MJXc-Node-88" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-89" class="mjx-mrow"><span id="MJXc-Node-90" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.193em; padding-bottom: 0.319em;">s</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-91" class="mjx-mrow" style=""><span id="MJXc-Node-92" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span><span id="MJXc-Node-93" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.446em; padding-bottom: 0.572em;">≠</span></span><span id="MJXc-Node-94" class="mjx-msub MJXc-space3"><span class="mjx-base" style="margin-right: -0.003em;"><span id="MJXc-Node-95" class="mjx-mrow"><span id="MJXc-Node-96" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em; padding-right: 0.003em;">d</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-97" class="mjx-mrow" style=""><span id="MJXc-Node-98" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-11"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>s</mi></mrow><mrow><mi>i</mi></mrow></msub><mo>≠</mo><msub><mrow><mi>d</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script>)&nbsp;—
      время вызова, стартовый этаж и этаж, на который едет человек, соответственно. <!--l. 75-->
      </p><p style="text-indent: 0em;">Гарантируется, что все <!--l. 75--><span class="MathJax\_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-12-Frame" class="mjx-chtml MathJax\_CHTML" tabindex="0" style="font-size: 113%;"><span id="MJXc-Node-99" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-100" class="mjx-mrow"><span id="MJXc-Node-101" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-102" class="mjx-mrow"><span id="MJXc-Node-103" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.382em; padding-bottom: 0.319em;">t</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-104" class="mjx-mrow" style=""><span id="MJXc-Node-105" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.446em; padding-bottom: 0.319em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-12"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script>
      <span style="font-weight: bold;">различны </span>и записаны в логе <span style="font-weight: bold;">в порядке возрастания</span>.
      </p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification">
      <!--l. 80-->
      <p style="text-indent: 0em;">Для всех пассажиров в порядке их следования во входных данных выведите по одному числу в в строке&nbsp;—
      времени ожидания лифта на этаже в секундах. </p>
      
   </div>
   <h3>Пример 1</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>5 10
5 5 1
10 2 3
15 3 1
20 4 5
25 3 2
</pre></td>
            <td><pre>40
85
50
95
40
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 2</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>5 10
1 1 4
101 1 4
202 1 4
300 4 1
301 4 1
</pre></td>
            <td><pre>0
30
30
0
59
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 3</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>2 10
1 5 6
2 2 3
</pre></td>
            <td><pre>40
89
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 4</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>6 1
1 1 4
2 2 4
3 3 4
7 4 2
8 1 2
9 2 1
</pre></td>
            <td><pre>0
0
0
0
2
0
</pre></td>
         </tr>
      </tbody>
   </table>

<hr>

