function Node(val){
this.left = null;
this.right = null;
this.value=val;
}

Node.prototype.addNode= function(n){
  if(n.value>this.value){
if(this.right==null){
  this.right=n;
}else{
this.right.addNode(n);
}
  }else{
    if(this.left==null){
      this.left=n;
    }else{
      this.left.addNode(n);
    }
  }
}

Node.prototype.visit= function(){
if(this.left!=null){
  this.left.visit();
}
  console.log(this.value);
  if(this.right!=null){
    this.right.visit();
  }
}
Node.prototype.search=function(val){
  if(this.value==val){
    return this;
  }else if(val>this.value && this.right!=null){
    return this.right.search(val);
  }else if(val<this.value && this.left!=null){
    return this.left.search(val);
  }else{
  return null;
}
}
function Tree(){
this.root=null;
}
Tree.prototype.addValue=function(val){
let n = new Node(val)
  if(this.root==null){
    this.root= n;
  }else{
    this.root.addNode(n);
  }
}
Tree.prototype.visit= function(){
  this.root.visit()
}
Tree.prototype.search= function(val){
  console.log(this.root.search(val))
}
let tree = new Tree()
tree.addValue(7)
tree.addValue(10)
tree.addValue(5)
tree.addValue(22)
tree.addValue(2)
tree.addValue(53)
tree.addValue(100)
tree.search(22);
