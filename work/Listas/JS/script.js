var lista=["mouse", "Disco Rigido", "monitor"]
var i
function adicionarProducto (){
    var produto = document.getElementById("novo_produto").value
    if(produto.length !== 0){
        lista.push(produto)
        document.getElementById("novo_produto").value=""
        alert("Produto Adicionado");
    }
    else
        alert("Insira um Produto")
}

function mostrarLista (){
    for(let i = 0; i < lista.length;i++)
    {
        let newParagraph = document.createElement("p")
        let textNode = document.createTextNode(lista[i])
        newParagraph.appendChild(textNode)
        let element = document.getElementById("lista-produtos")
        element.appendChild(newParagraph)
    }
}

function lastElement (){

}