avg a b = (a+b)/2
bisect f (u, l) = if (f u) * (f s) < 0 then (u, s) else (s, l) where s = avg u l

epsilon = 1e-10
start = (0, 2)
function x = x^2 - 2

main = putStrLn $ show $ (uncurry avg) $ until (\(x, y) -> abs (x - y) < epsilon) (bisect function) start
