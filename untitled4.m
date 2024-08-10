clear
clc
syms x 
y = ((3x+2)^1/2 +sin(2.*x).*log(x))
yd = polyder(y,x) :

% Function g(x,y)=x+y-10; % Constraint F=f+L*g; Fx=d
% iff(F,x);Fy=diff(F,y);  S=solve(g,Fx,Fy,'Real',true);  %Solving only for Real x and y St_pts=[S.x,S.y];     % Stationary points St_pts=double(St_pts)  Fun_Val=f(S.x,S.y);   % Function values at Stationary points Fun_Val=double(Fun_Val)  % Visualization of Function and constraint  X=linspace(min(S.x)-3,max(S.x)+3,20);X=double(X); % X data Y=linspace(min(S.y)-3,max(S.y)+3,20);Y=double(Y); % Y data [X,Y]=meshgrid(X,Y); Z=f(X,Y);Z=double(Z);    surf(X,Y,Z);hold on; % Function surface xlabel('x');ylabel('y');zlabel('f(x,y)'); gv=fimplicit(g,'b'); % Constraint curve hold on;  xv=get(gv,'XData');  yv=get(gv,'YData');  fv=f(xv,yv);fv=double(fv); plot3(xv,yv,fv,'-r'); %Constrained extrema on the Function surface.