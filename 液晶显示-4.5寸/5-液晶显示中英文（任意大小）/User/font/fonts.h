 # i f n d e f   _ _ F O N T _ H  
 # d e f i n e   _ _ F O N T _ H                
  
 # i n c l u d e   " s t m 3 2 f 1 0 x . h "  
  
  
  
 / * *   @ d e f g r o u p   F O N T S _ E x p o r t e d _ T y p e s  
     *   @ {  
     * /    
 t y p e d e f   s t r u c t   _ t F o n t  
 {          
     c o n s t   u i n t 8 _ t   * t a b l e ;  
     u i n t 1 6 _ t   W i d t h ;  
     u i n t 1 6 _ t   H e i g h t ;  
      
 }   s F O N T ;  
  
 e x t e r n   s F O N T   F o n t 2 4 x 4 8 ;  
 e x t e r n   s F O N T   F o n t 1 6 x 3 2 ;  
 e x t e r n   s F O N T   F o n t 8 x 1 6 ;  
  
  
 / * * * * * * * * * * * * * * * * * * *N-e� * * * * * * * * * *  W(f>y:\ON
f>y:v�[W{&Y'\   * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 # d e f i n e             W I D T H _ C H _ C H A R 	 	                                 3 2 	         / /N-e�[W{&[�^�    
 # d e f i n e             H E I G H T _ C H _ C H A R 	 	                             	 3 2 	 	     / /N-e�[W{&[�^�    
  
  
  
 # d e f i n e   L I N E ( x )   ( ( x )   *   ( ( ( s F O N T   * ) L C D _ G e t F o n t ( ) ) - > H e i g h t ) )  
  
 / / L I N E Y~�N Ou(lI[W[Wj!v���^�  
 # d e f i n e   L I N E Y ( x )   ( ( x )   *   ( W I D T H _ C H _ C H A R ) )  
  
  
  
  
 / / 0�hy:Ou( S DSa[Wj!��^���hy: F L A S H[Wj! ,u1N� S DSa[Wj!g	e�N�|�~���^�ab_�Y0  
  
 # d e f i n e   G B K C O D E _ F L A S H   	 	 	 	 	 	 1  
  
 # i f   G B K C O D E _ F L A S H  
 	 / *Ou( F L A S H[Wj! * /  
 	 / *N-e�[W^�[XP�W( F L A S Hv��wY�W0W@ * /  
 	 / * F L A S H * /  
 	 # d e f i n e   G B K C O D E _ S T A R T _ A D D R E S S       5 1 2 * 4 0 9 6  
  
  
 	 / *��S�[W^�v�Q�ep * /  
 	 / /[�NI��S�N-e�[W{&[Wj!ep~�v�Q�epT� u c B u f f e rN:[Xe>[Wj!ep~�T� u s C h a rN:N-e�[W{&�V�hx�	  
 	 # d e f i n e             G e t G B K C o d e (   u c B u f f e r ,   u s C h a r   )     G e t G B K C o d e _ f r o m _ E X F l a s h (   u c B u f f e r ,   u s C h a r   )      
 	 i n t   G e t G B K C o d e _ f r o m _ E X F l a s h (   u i n t 8 _ t   *   p B u f f e r ,   u i n t 1 6 _ t   c ) ;  
  
 # e l s e  
 	 / *Ou( S D[Wj! * /  
  
  
 	 / * S DSa[Wj!��_� * /  
 	 # d e f i n e   G B K C O D E _ F I L E _ N A M E 	 	 	 " 0 : / F o n t / G B 2 3 1 2 _ H 3 2 3 2 . F O N "  
  
  
 	 / *��S�[W^�v�Q�ep * /  
 	 / /[�NI��S�N-e�[W{&[Wj!ep~�v�Q�epT� u c B u f f e rN:[Xe>[Wj!ep~�T� u s C h a rN:N-e�[W{&�V�hx�	  
  
 	 # d e f i n e   G e t G B K C o d e (   u c B u f f e r ,   u s C h a r   )     G e t G B K C o d e _ f r o m _ s d (   u c B u f f e r ,   u s C h a r   )  
 	 i n t   G e t G B K C o d e _ f r o m _ s d   (   u i n t 8 _ t   *   p B u f f e r ,   u i n t 1 6 _ t   c ) ;  
  
 # e n d i f  
  
  
  
 # e n d i f   / * e n d   o f   _ _ F O N T _ H         * /  
