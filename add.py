def a(p,q,r):
    if ((q^p)^(p+r)>(q^r)):
        p=(q+7)+q
        q=q&q
        return p+q+r
print(a(8,3,8))
