console.clear();
var id=0;
var getID=()=>++id;
const isEmpty=(str) => str. trim() ==='';
function agregar (){
  var nombre=document.getElementById( 'nombre' );
  var apellido=document.getElementById('apellido');
  var email=document.getElementById('email');
  nombreval=nombre.value;
  apellidoval=apellido.value;
  emailVal=email.value;
  tablalsuarios=document.getElementById("tablaUsuarios");
  if( isEmpty( nombreval)|| isEmpty( apellidoval)|| isEmpty( emailval )){
    alert( 'Todos los campos son obligatorios');
    return;
  }
  Let id = getID();
  Let fila= `<tr data-id="${id}">
                <td>${id}</td>
                <td>${nombreVal}</td>
                <td>${apellidoval}</td>
                <td>${emailVal}</td>
                <td><button class="btnEliminar">Eliminar</button></td>
              </tr>`;

  tablausuarios.lastElementchild.insertAdjacentHTML( 'beforeend', fila );
  nombre.value  =' ';
  apellido.value =' ';
  email.value =' ';
  nombre.focus ();
};
document.addEventListener( 'click',(e)=>{
  if( e.target.classList.contains( 'btnEliminar')){
    e.target.parentElement.parentElement.remove();
  }
})
function asignar(){
  btnAgregar=document.getElementById('btnAgregar');
  btnAgregar.addEventListener("click", agregar);
}
             
window.addEventListener("load", asignar);


