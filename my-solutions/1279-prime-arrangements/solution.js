const numPrimeArrangements=r=>{let e=r=>{for(let e=2,t=Math.sqrt(r);e<=t;e++)if(!(r%e))return!1;return r>1},t=1;for(let n=1,_=1,u=1e9+7;r>0;r--)t=t*(e(r)?n++:_++)%u;return t};
