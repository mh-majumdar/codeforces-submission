##
includeinclude
<h><bits/stdc++.h>
using stdusing namespace std
;;
int32_tint32_t
mainmain
((
))
{{
ios_base
::::
sync_stdiosync_with_stdio
((
00
))
;;
cin
..
tietie
((
00
))
;;
intint
n
;;
cin
>>>>
n
;;
vector
<<
intint
>>
v
;;
forfor
((
intint
i
==
22
;;
i
**
i
<=<=
n
;;
i
++++
))
{{
1 n n
n n
n O( n)
n n
ifif
((
n
%%
i
====
00
))
{{
whilewhile
((
n
%%
i
====
00
))
{{
v
..
push_backpush_back
((
ii
))
;;
n
/=/=
i
;;
}}
}}
}}
ifif
((
n
>>
11
))
v
..
push_backpush_back
((
nn
))
;;
forfor
((
autoauto
x
::
v
))
cout
<<<<
x
<<<<
' '' '
;;
returnreturn
00
;;
}}