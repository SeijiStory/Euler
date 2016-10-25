(define (sum x)
  (define (sumn a b)
	(define c (/ b a))
	(/ (* a c (+ c 1)) 2))
  (- (+ (sumn 3 (- x 1)) (sumn 5 (- x 1))) (sumn 15 (- x 1))))

